# Import ROS
import rclpy
from rclpy.node import Node

#Import Interfaces
from intro_interfaces.srv import LEDTracker

class ServiceLEDTracker(Node):
    def __init__(self):
        super().__init__('server_led_tracker')
        self.srv_ = self.create_service(LEDTracker, 'track_sys_blinks', self.track_total_sys_blinks)
        self.total_sys_cycles = 0

    def track_total_sys_blinks(self,req,res):
        if not req.led_state:
            if req.num_of_sys_blinks % 10 == 0:
                self.total_sys_cycles += 1
                res.num_of_cycles_completed = self.total_sys_cycles
                res.is_total_blinks_in_series_of_ten = True
        self.get_logger().info(f'Cycle Complete:{res.num_of_cycles_completed} // Commit to blink:{res.is_total_blinks_in_series_of_ten}')
        return res



# Create Main
def main(args=None):
    rclpy.init(args=args)
    node = ServiceLEDTracker()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


# Execute
if __name__ == "__main__":
    main()