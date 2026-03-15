import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rcl_interfaces.msg import SetParametersResult
import math

class TurtleParamController(Node):
    def __init__(self):
        super().__init__('turtle_param_controller')

        # Publisher
        self.pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Parameters
        # declare_parameter(): 노드가 사용할 파라미터를 미리 선언하고 기본값을 설정하는 함수
        self.declare_parameter('mode', 'straight')
        self.declare_parameter('linear_speed', 1.5)
        self.declare_parameter('angular_speed', 2.0)
        self.declare_parameter('enable', True)

        # get_parameter(): 노드에 선언된 파라미터의 현재 값을 가져오는 함수
        self.mode = self.get_parameter('mode').value
        self.linear_speed = self.get_parameter('linear_speed').value
        self.angular_speed = self.get_parameter('angular_speed').value
        self.enable = self.get_parameter('enable').value

        self.timer = self.create_timer(0.1, self.timer_callback)

        # add_on_set_parameters_callback(): 파라미터를 실시간으로 변경 가능하게 만드는 핵심 코드
        self.add_on_set_parameters_callback(self.param_callback)
        
        self.get_logger().info('Trutle Param Controller Started')

        
    def timer_callback(self):
            if not self.enable:
                return
            
            msg = Twist()

            if self.mode == 'straight':
                msg.linear.x = self.linear_speed

            elif self.mode == 'circle':
                msg.linear.x = self.linear_speed
                msg.angular.z = self.angular_speed

            elif self.mode == 'zigzag':
                msg.linear.x = self.linear_speed
                msg.angular.z = math.sin(self.get_clock().now().nanoseconds * 1e-9) * self.angular_speed

            elif self.mode == 'stop':
                msg.linear.x = 0.0
                msg.angular.z = 0.0

            self.pub.publish(msg)


        # param.name으로 어떤 파라미터인지 구분
        # param.value로 그 값을 가져와 사용        
    def param_callback(self, params):
            for param in params:
                if param.name == 'mode':
                    if param.value not in ['straight', 'circle', 'zigzag', 'stop']:
                        return SetParametersResult(
                            successful=False,
                            reason='Invalid mode'
                        )
                    self.mode = param.value
                
                elif param.name == 'linear_speed':
                    self.linear_speed = float(param.value)

                elif param.name == 'angular_speed':
                    self.angular_speed = float(param.value)

                elif param.name == 'enable':
                    self.enable = bool(param.value)

            return SetParametersResult(successful=True)
    
def main():
    rclpy.init()
    node = TurtleParamController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

