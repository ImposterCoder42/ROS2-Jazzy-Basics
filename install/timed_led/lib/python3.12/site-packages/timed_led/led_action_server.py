import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from intro_interfaces.action import ToggleLED

from time import sleep



class LEDActionServer(Node):
    def __init__(self):
        super().__init__('led_action_server')
        self.action_server_ = ActionServer(self, ToggleLED, 'led_action', self.exec_cb)
        self.current_duty_cycle = 0 
        self.current_led_state = False 
    
    def exec_cb(self, goal_handle):
        self.get_logger().info(f'executing goal..{self.current_duty_cycle}')

        feedback_msg = ToggleLED.Feedback()
        

        for i in range(1,101):
            if goal_handle.request.state and not self.current_led_state:
                self.current_duty_cycle = self.current_duty_cycle + 1
            elif not goal_handle.request.state and self.current_led_state:
                self.current_duty_cycle = self.current_duty_cycle - 1
            else:
                self.get_logger().warn("Can not set the LED to the same state..")
                break
            feedback_msg.current_duty_cycle = self.current_duty_cycle
            self.get_logger().info(f'Current Duty Cycle: {feedback_msg.current_duty_cycle}')
            goal_handle.publish_feedback(feedback_msg)
            sleep(.1)
        
        self.current_led_state = goal_handle.request.state

        goal_handle.succeed()
        
        result = ToggleLED.Result()
        result.is_complete = True
        return result



# Create Main
def main(args=None):
    rclpy.init(args=args)
    node = LEDActionServer()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


# Execute
if __name__ == "__main__":
    main()