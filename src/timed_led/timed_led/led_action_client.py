import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from intro_interfaces.action import ToggleLED
from intro_interfaces.srv import SlowLEDToggle

class LEDActionClient(Node):
    def __init__(self):
        super().__init__('led_action_client')
        self._action_client = ActionClient(self, ToggleLED, 'led_action')
        self.ps4_controller_srv_ = self.create_service(SlowLEDToggle, 'slow_toggle_led_cmd', self.switch_led_state_callback)
    
    def send_goal(self, new_led_state):
        goal_msg = ToggleLED.Goal()
        goal_msg.state = new_led_state

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_cb)
        self._send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn('Goal has been rejected')
            return

        self.get_logger().info('Goal Has Been Accepted!')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Results: {result.is_complete} // JOB COMPLETE!')
    
    def switch_led_state_callback(self, req,res):
        state = req.req
        self.send_goal(state)
        res.res = True
        return res

    def feedback_cb(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'LED is {feedback.current_duty_cycle}% on..')


# Create Main
def main(args=None):
    rclpy.init(args=args)
    node = LEDActionClient()
    
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


# Execute
if __name__ == "__main__":
    main()
