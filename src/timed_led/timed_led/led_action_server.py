import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from intro_interfaces.action import ToggleLED

import RPi.GPIO as GPIO
from time import sleep

slow_toggle_led = 15

def setup():
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(slow_toggle_led, GPIO.OUT)

    global slow_toggle_led_p

    slow_toggle_led_p = GPIO.PWM(slow_toggle_led, 1000)
    slow_toggle_led_p.start(0)

class LEDActionServer(Node):
    def __init__(self):
        super().__init__('led_action_server')
        self.action_server_ = ActionServer(self, ToggleLED, 'led_action', self.exec_cb)
        self.current_duty_cycle = 0 
    
    def exec_cb(self, goal_handle):
        self.get_logger().info(f'executing goal..{self.current_duty_cycle}')

        feedback_msg = ToggleLED.Feedback()
        

        for i in range(1,101):
            if goal_handle.request.state:
                self.current_duty_cycle = self.current_duty_cycle + 1
            elif not goal_handle.request.state:
                self.current_duty_cycle = self.current_duty_cycle - 1
            else:
                self.get_logger().warn("Data Type Error: New state must come in the form of a boolean..")
                break
            slow_toggle_led_p.ChangeDutyCycle(self.current_duty_cycle)
            feedback_msg.current_duty_cycle = self.current_duty_cycle
            self.get_logger().info(f'Current Duty Cycle: {feedback_msg.current_duty_cycle}')
            goal_handle.publish_feedback(feedback_msg)
            sleep(.2)
        
        self.current_led_state = goal_handle.request.state

        goal_handle.succeed()
        
        result = ToggleLED.Result()
        result.is_complete = True
        return result



# Create Main
def main(args=None):
    setup()
    try:
        rclpy.init(args=args)
        node = LEDActionServer()

        rclpy.spin(node)

        node.destroy_node()
        rclpy.shutdown()
    except KeyboardInterrupt:
        GPIO.cleanup()

# Execute
if __name__ == "__main__":
    main()