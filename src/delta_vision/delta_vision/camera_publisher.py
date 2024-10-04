#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image
from geometry_msgs.msg import PoseArray, Pose
from delta_interfaces.msg import Detection, AllDetections 
from cv_bridge import CvBridge
from delta_vision.essentials import *
import requests
from ament_index_python.packages import get_package_share_directory
import os, warnings

# Suppress warnings
warnings.filterwarnings("ignore")

model_dir = get_package_share_directory('delta_vision')
model_path = os.path.join(model_dir, 'resource', 'best.pt')


class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')
        self.bridge = CvBridge()
        self.img_publisher_ = self.create_publisher(Image, 'camera_topic', 10)
        self.live_publisher_ = self.create_publisher(Image, 'live_feed', 10)
        self.detections_publisher_ = self.create_publisher(AllDetections, 'framewise_detection', 10)
        self.get_logger().info("Camera Publisher Active")

        self.timer = self.create_timer(10, self.capture_and_publish)
        self.timer2 = self.create_timer(1/30, self.live_feed)
        self.img_url = "https://192.168.18.184:14415/shot.jpg"
        self.all_objects = None
        self.call_count = 0

    def capture_and_publish(self):
        self.call_count += 1
        img_resp = requests.get(self.img_url, verify=False)
        img_arr = np.array(bytearray(img_resp.content), dtype=np.uint8)
        frame = cv2.imdecode(img_arr, -1)
        img = cv2.resize(frame, (640, 384))

        all_objects = GetObjects(img, model_path)
        self.all_objects = all_objects
        
        for i in range(len(all_objects)):
            cam_loc = all_objects[f'Obj{i}']['location']
            cam_px = int(cam_loc[0][0])
            cam_py = int(cam_loc[0][1])
            paper_loc = image2Dworld3D([cam_px, cam_py])
            cv2.drawMarker(img, (cam_px, cam_py), (255, 0, 0))
            label = all_objects[f'Obj{i}']['label']
            cv2.putText(img, f'{label}', (cam_px, cam_py), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (255, 0, 0), 1)

            x1, y1, x2, y2 = map(int, all_objects[f'Obj{i}']['rectangle'].cpu().numpy())
            if all_objects[f'Obj{i}']['label'] == 'fully_ripened':
                cv2.rectangle(img, (x1, y1), (x2, y2), (0, 0, 255), 2)
                cv2.putText(img, f'{label}', (cam_px, cam_py), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 0, 255), 1)

            elif all_objects[f'Obj{i}']['label'] == 'half_ripened':
                cv2.rectangle(img, (x1, y1), (x2, y2), (0, 165, 255), 2)
                cv2.putText(img, f'{label}', (cam_px, cam_py), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 165, 255), 1)
            elif all_objects[f'Obj{i}']['label'] == 'green':
                cv2.rectangle(img, (x1, y1), (x2, y2), (0, 255, 0), 2)
                cv2.putText(img, f'{label}', (cam_px, cam_py), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 1)


        # test_points = np.array([[500, 300], [500, 100], [200, 300], [200, 100]])
        # for point in test_points:
        #     cv2.drawMarker(img, (point[0], point[1]), (0, 255, 0))
        #     cv2.putText(img, f'({point[0], point[1]})', (point[0], point[1]), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 3)

        if img_resp.status_code == 200:
            img_msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
            self.img_publisher_.publish(img_msg)
        
        all_detections = AllDetections()
        all_detections.header.stamp = self.get_clock().now().to_msg()
        all_detections.header.frame_id = 'map'
        if self.all_objects is not None:
            for i, obj in enumerate(self.all_objects.values()):
                cam_loc = obj['location'][0]
                cam_px, cam_py = int(cam_loc[0]), int(cam_loc[1])
                paper_loc = image2Dworld3D([cam_px, cam_py])
                detection = Detection()
                detection.x = paper_loc[0]
                detection.y = paper_loc[1]
                detection.z = paper_loc[2]
                detection.category = obj['label']
                all_detections.detections.append(detection)
        
        all_detections.frame_id = self.call_count
        self.detections_publisher_.publish(all_detections)
    
    def live_feed(self):
        # Live from url
        img_resp = requests.get(self.img_url, verify=False)
        img_arr = np.array(bytearray(img_resp.content), dtype=np.uint8)
        frame = cv2.imdecode(img_arr, -1)
        img = cv2.resize(frame, (640, 384))
        if img_resp.status_code == 200:
            img_msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
            self.live_publisher_.publish(img_msg)

    def shutdown(self):
        cv2.destroyAllWindows()
    

def main(args=None):
    rclpy.init(args=args)
    camera_publisher = CameraPublisher()
    try:
        rclpy.spin(camera_publisher)
    except KeyboardInterrupt:
        pass
    finally:
        camera_publisher.shutdown()
        rclpy.shutdown()

if __name__ == '__main__':
    main()