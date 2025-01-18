# Import ROS
import rclpy
from rclpy.node import Node

#Import Interfaces
from intro_interfaces.msg import LEDState
from intro_interfaces.srv import LEDTracker

class ClientLEDTracker(Node):
    def __init__(self):
        super().__init__('client_led_tracker')
        self.subscriber_ = self.create_subscription(LEDState, 'timed_led', self.count_current_cycle, 10)
        self.sys_cycle_blinks = 0
    

    def count_current_cycle(self, msg):
        if msg.state:
            self.sys_cycle_blinks += 1
        else:
            self.call_led_tracker(msg.state)


    def call_led_tracker(self, led_state):
        client = self.create_client(LEDTracker, 'track_sys_blinks')
        while not client.wait_for_service(1.0):
            self.get_logger().warn('waiting for the LED tracking service...')
        
        request = LEDTracker.Request()
        request.num_of_sys_blinks = self.sys_cycle_blinks
        request.led_state = led_state

        future_object = client.call_async(request)
        future_object.add_done_callback(self.blink_and_reset)
    

    def blink_and_reset(self, future):
        try:
            response = future.result()
            if response.is_total_blinks_in_series_of_ten:
                self.sys_cycle_blinks = 0
                self.get_logger().info(f'Results: {response}')
        except Exception as e:
            self.get_logger().info(f'Service failed for this reason: {e},... Junk')


# Create Main
def main(args=None):
    rclpy.init(args=args)
    node = ClientLEDTracker()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


# Execute
if __name__ == "__main__":
    main()