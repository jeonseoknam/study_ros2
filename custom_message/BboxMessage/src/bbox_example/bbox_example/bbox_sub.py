#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from my_msgs.msg import BboxMsg

class BboxSubscriber(Node):
    def __init__(self):
        super().__init__('bbox_subscriber')
        self.subscription = self.create_subscription(
            BboxMsg,
            'bbox_topic',
            self.listener_callback,
            10
        )

    def listener_callback(self, msg):
        self.get_logger().info(
            f'Received -> index: {msg.index}, cls: {msg.cls}, conf: {msg.conf:.2f}, '
            f'bbox: ({msg.minx}, {msg.miny}) ~ ({msg.maxx}, {msg.maxy})'
        )

def main(args=None):
    rclpy.init(args=args)
    node = BboxSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()    