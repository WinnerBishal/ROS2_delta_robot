import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseArray
from delta_interfaces.msg import Detection, AllDetections
from delta_vision.essentials import DeltaRobot, PNPTestPath, send_command, commander
import numpy as np
import serial, time
# Create aposeArray subscriber

r = 171.5
h = 200
s = 50
k = 435
Zt = 0
robot = DeltaRobot(r, h, s, k, Zt)
mega_baudrate = 19200
port = '/dev/ttyACM0'

try:
    ardMega = serial.Serial(port, baudrate = mega_baudrate, timeout = 2)
    time.sleep(2)  
    if ardMega:
        print(f"Connection to {port} established")
    # self.connection_successful.emit()
            
except serial.SerialException as e:
    print(f"Connection to {port} failed")
    # self.connection_failed.emit()

class ObjectTracker(Node):
    def __init__(self):
        super().__init__('object_tracker')
        self.detections_subscriber_ = self.create_subscription(AllDetections, 'framewise_detection', self.pose_array_callback, 1)
        self.track_publisher_ = self.create_publisher(AllDetections, 'realtime_object_tracking', 10)
        self.get_logger().info("Object Tracker Active")
        # self.timer = self.create_timer(1, self.track_publish)
        self.detections = None
        self.isReady = False
    
    
    def pose_array_callback(self, msg):

        def within_boundary(X, Y):
            if X < -245 or X > 100 or Y < -90 or Y > 50:
                return False
            else:
                return True
        
        self.pose_array = msg
        self.get_logger().info(f"Received Pose Array with {len(msg.detections)} detections {msg.frame_id}")
        green_objects = []
        geen_box = np.array([100, -230, -500])
        
        while True:
            response = ''
            while ardMega.in_waiting:
                raw = ardMega.read()
                response += raw.decode('utf-8').strip()
            
            if response == "READY":
                self.isReady = True
                self.get_logger().info(f"Response: {response}")
                break
            else:
                self.isReady = False
                # self.get_logger().info("Arduino Mega is not ready")
                    
        if self.isReady:
            # Print position of poses
            for i in range(len(msg.detections)):
                current_object = msg.detections[i]

                if current_object.category == 'half_ripened':
                    if within_boundary(current_object.x, current_object.y):
                        green_objects.append([current_object.x-5, current_object.y, current_object.z])

            green_objects = np.array(green_objects)
            self.get_logger().info(f"Green Objects: {green_objects}")
            if len(green_objects) > 0:
                path_planner = PNPTestPath(robot, green_objects, geen_box)
                
                commands, full_path = path_planner.plan_path()
                # path_planner.plot_full_path()
                commander(ardMega, commands)
                self.get_logger().info(f"Commands sent; Length: {len(commands)}")
                # while True:
                #     rsp = ''
                #     while ardMega.in_waiting:
                #         rw = ardMega.read()
                #         rsp += raw.decode('utf-8').strip()
                #         print(rsp)
                #         # time.sleep(0.001)
                #     if response == "D":
                #         print(f"Response: {rsp}")
                #         break
                # for command in commands:
                #     M1 = command[0]
                #     M2 = command[1]
                #     M3 = command[2]
                #     G = command[3]
                    
                #     send_command(ardMega, m1 = M1, m2 = M2, m3 = M3, gripper = G)
                #     self.get_logger().info("Here")
                #     self.get_logger().info(f"Sent Command: M1: {M1}, M2: {M2}, M3: {M3}, G: {G}")

    


def main(args=None):
    rclpy.init(args=args)
    object_tracker = ObjectTracker()
    try:
        rclpy.spin(object_tracker)
    except KeyboardInterrupt:
        pass
    finally:
        object_tracker.destroy_node()
        rclpy.shutdown()