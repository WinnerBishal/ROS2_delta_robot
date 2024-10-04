#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')
        self.bridge = CvBridge()
        self.publisher_ = self.create_publisher(Image, 'camera_topic', 10)
        self.get_logger().info("Camera Publisher Active")
        self.timer = self.create_timer(1 / 30, self.capture_and_publish)
        self.cap = cv2.VideoCapture(0)

    def capture_and_publish(self):
        ret, frame = self.cap.read()
        if ret:
            img_msg = self.bridge.cv2_to_imgmsg(frame, encoding="bgr8")
            self.publisher_.publish(img_msg)

    def shutdown(self):
        self.cap.release()
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