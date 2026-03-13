#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from my_msgs.msg import BboxMsg

class BboxPublisher(Node):
    def __init__(self):
        super().__init__('bbox_publisher')
        self.publishers_ = self.create_publisher(BboxMsg, 'bbox_topic', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.count = 0

    def timer_callback(self):
        msg = BboxMsg()
        msg.index = self.count
        msg.cls = 1
        msg.conf = 0.95
        msg.minx = 100 + self.count
        msg.miny = 120 + self.count
        msg.maxx = 200 + self.count
        msg.maxy = 260 + self.count

        self.publishers_.publish(msg)
        self.get_logger().info(
            f'Publish -> index: {msg.index}, cls: {msg.cls}, conf: {msg.conf:.2f},'
            f'bbox: ({msg.minx}, {msg.miny}) ~ ({msg.maxx}, {msg.maxy})'
        )
        self.count += 1


def main(args=None):
    rclpy.init(args=args)
    node = BboxPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

