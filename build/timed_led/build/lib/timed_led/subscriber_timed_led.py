#!/usr/bin/env python3
# Import ROS
import rclpy
from rclpy.node import Node

#Import GPIO Controls
import RPi.GPIO as GPIO

#Import Interfaces
from intro_interfaces.msg import LEDState

# Setup Pi
timed_blink_led = 4

def setup():
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(timed_blink_led, GPIO.OUT)



# Create Class
class SubsciberTimedLED(Node):
    def __init__(self):
        super().__init__('subscriber_timed_led')
        self.subscriber_ = self.create_subscription(LEDState, 'timed_led', self.toggle_led_state, 10)
    
    def toggle_led_state(self,msg):
        if msg.state:
            self.get_logger().warn(f'Turning LED {msg.new_state_msg}...') # insert GPIO Call
            GPIO.output(timed_blink_led, GPIO.HIGH)
        else:
            self.get_logger().info(f'Turning LED {msg.new_state_msg}...') # Move logger out of If Statement
            GPIO.output(timed_blink_led, GPIO.LOW)



# Create Main
def main(args=None):
    setup()
    try:
        rclpy.init(args=args)
        node = SubsciberTimedLED()

        rclpy.spin(node)

        node.destroy_node()
        rclpy.shutdown()
    except KeyboardInterrupt:
        GPIO.cleanup()

# Execute
if __name__ == "__main__":
    main()