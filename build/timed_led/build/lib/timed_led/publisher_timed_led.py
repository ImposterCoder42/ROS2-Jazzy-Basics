# Import ROS
import rclpy
from rclpy.node import Node

#Import Interfaces
from intro_interfaces.msg import LEDState

# Create Class
class PublisherTimedLED(Node):
    def __init__(self):
        super().__init__('publisher_timed_led')
        self.publisher_  = self.create_publisher(LEDState, 'timed_led', 10)
        self.led_state_msg = 'off'
        self.led_state = False
        self.create_timer(1.0, self.toggle_led_status)

    def toggle_led_status(self):
        msg = LEDState()
        msg.new_state_msg = self.led_state_msg
        msg.state = self.led_state
        self.publisher_.publish(msg)
        self.get_logger().info(f'New LED Status:{self.led_state_msg}\n${msg}')
        self.led_state_msg = 'on' if self.led_state_msg == "off" else 'off'
        self.led_state = not self.led_state
        


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