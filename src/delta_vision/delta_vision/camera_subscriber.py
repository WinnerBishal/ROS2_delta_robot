#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraSubscriber(Node):
    def __init__(self):
        super().__init__('camera_subscriber')
        self.bridge = CvBridge()
        self.subscription = self.create_subscription(
            Image,
            'camera_topic',
            self.image_callback,
            10)
        self.subscription  # prevent unused variable warning

        self.live_feed = self.create_subscription(
            Image,
            'live_feed',
            self.live_callback,
            10)
        self.live_feed

    def image_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
            cv2.imshow("Camera Frame", cv_image)
            cv2.waitKey(1)
        except Exception as e:
            self.get_logger().info(str(e))
    
    def live_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
            cv2.imshow("Live Feed", cv_image)
            cv2.waitKey(1)
        except Exception as e:
            self.get_logger().info(str(e))

def main(args=None):
    rclpy.init(args=args)
    camera_subscriber = CameraSubscriber()
    try:
        rclpy.spin(camera_subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        cv2.destroyAllWindows()
        camera_subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
