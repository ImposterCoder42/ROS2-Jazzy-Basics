import rclpy
from rclpy.node import Node
import cv2

class Camera_Node(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.camera_ = cv2.VideoCapture(0)
        self.shutter_timer_ = self.create_timer(0.03333, self.take_single_frame)

        self.get_logger().info('I can see!')
    
    def take_single_frame(self):
        sucess, frame = self.camera_.read()
        if sucess:
            frame_gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            frame_gray = cv2.equalizeHist(frame_gray)
            frame_gray = cv2.rotate(frame_gray, cv2.ROTATE_180)
            cv2.imshow('Optimus Eye', frame_gray)
            cv2.waitKey(1)
    
    def destroy_eye(self):
        self.camera_.release()
        cv2.destroyAllWindows()


def main(args=None):
    rclpy.init(args=args)
    node = Camera_Node()

    rclpy.spin(node)

    node.destroy_eye()
    node.destroy_node()
    rclpy.shutdown()


# Execute
if __name__ == "__main__":
    main()