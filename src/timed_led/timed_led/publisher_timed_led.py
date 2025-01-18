# Import ROS
import rclpy
from rclpy.node import Node

#Import Interfaces
from std_msgs.msg import String

# Create Class
class PublisherTimedLED(Node):
    def __init__(self):
        super().__init__('publisher_timed_led')
        self.publisher_  = self.create_publisher(String, 'timed_led', 10)
        self.led_status = 'off'
        self.create_timer(1.0, self.toggle_led_status)

    def toggle_led_status(self):
        msg = String()
        msg.data = self.led_status
        self.publisher_.publish(msg)
        self.get_logger().info(f'New LED Status:{self.led_status}')
        self.led_status = 'on' if self.led_status == "off" else 'off' 
        


# Create Main
def main(args=None):
    rclpy.init(args=args)
    node = PublisherTimedLED()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown(())


# Execute
if __name__ == "__main__":
    main()