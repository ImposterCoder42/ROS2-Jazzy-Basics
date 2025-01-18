# Import ROS
import rclpy
from rclpy.node import Node

#Import Interfaces
from std_msgs.msg import String

# Create Class
class SubsciberTimedLED(Node):
    def __init__(self):
        super().__init__('subscriber_timed_led')
        self.subscriber_ = self.create_subscription(String, 'timed_led', self.toggle_led_state, 10)
    
    def toggle_led_state(self,msg):
        if msg.data == "on":
            self.get_logger().info('Turning on LED...')
        elif msg.data == "off":
            self.get_logger().info('Turning off LED...')

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