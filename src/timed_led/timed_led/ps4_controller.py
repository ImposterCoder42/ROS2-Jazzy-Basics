import rclpy
from rclpy.node import Node
from pyPS4Controller.controller import Controller

from intro_interfaces.srv import SlowLEDToggle



class PS4Controls(Node, Controller):
    def __init__(self, **kwargs):
        Controller.__init__(self, **kwargs)
        super().__init__('ps4_controls')
        self.slow_led_next_state = True

    def on_x_press(self):
        self.get_logger().info('Hello World!')
    
    def on_triangle_press(self):
        self.get_logger().info('Toggle LED')
        self.call_led_slow_toggle()
        self.slow_led_next_state = not self.slow_led_next_state

    def call_led_slow_toggle(self):
        client = self.create_client(SlowLEDToggle, 'slow_toggle_led_cmd')
        while not client.wait_for_service(1.0):
            self.get_logger().warn('waiting for the LED Action Client...')
        
        request = SlowLEDToggle.Request()
        request.req = self.slow_led_next_state

        future_object = client.call_async(request)
        future_object.add_done_callback(self.action_client_response)
    
    def action_client_response(self, future):
        try:
            response = future.result()
            self.get_logger().info(f'Results: {response.res}')
        except Exception as e:
            self.get_logger().info(f'Service failed for this reason: {e},... Junk')


class PS4Controller(Node):
    def __init__(self):
        super().__init__('ps4_controller')
        self.controller_ =  PS4Controls(interface="/dev/input/js0", connecting_using_ds4drv=False)
        self.controller_.listen(timeout=60) # wait 60 sec to connect



def main(args=None):
    rclpy.init(args=args)
    node = PS4Controller()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()