# Import ROS
import rclpy
from rclpy.node import Node

#Import Interfaces
from intro_interfaces.msg import LEDState

# Create Class
class SubsciberTimedLED(Node):
    def __init__(self):
        super().__init__('subscriber_timed_led')
        self.subscriber_ = self.create_subscription(LEDState, 'timed_led', self.toggle_led_state, 10)
    
    def toggle_led_state(self,msg):
        if msg.state:
            self.get_logger().warn(f'Turning LED {msg.new_state_msg}...') # insert GPIO Call
        else:
            self.get_logger().info(f'Turning LED {msg.new_state_msg}...') # Move logger out of If Statement

# Create Main
def main(args=None):
    rclpy.init(args=args)
    node = SubsciberTimedLED()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown(())


# Execute
if __name__ == "__main__":
    main()