#!/usr/bin/env python3

import rclpy
import random
from rclpy.node import Node
from  example_interfaces.msg import Float32

class OnFieldNode(Node):
    def __init__(self):
        super().__init__("onfield")
        self.publisher_temp = self.create_publisher(Float32, 'temperature', 10)
        self.publisher_press = self.create_publisher(Float32, 'pressure', 10)
        self.publisher_humidity = self.create_publisher(Float32, 'humidity', 10)
        self.timer = self.create_timer(0.5, self.timer_callback)
        self.get_logger().info("Publisher has started")

    def timer_callback(self):
        self.publish_temperature()
        self.publish_pressure()
        self.publish_humidity()

    def publish_temperature(self):
        temperature = random.uniform(10.0, 100.0)
        msg = Float32()
        msg.data = temperature
        self.publisher_temp.publish(msg)

    def publish_pressure(self):
        pressure = random.uniform(0.95, 1.2)
        msg = Float32()
        msg.data = pressure
        self.publisher_press.publish(msg)

    def publish_humidity(self):
        humidity = random.uniform(0.7, 0.95)
        msg = Float32()
        msg.data = humidity
        self.publisher_humidity.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    onfield = OnFieldNode()
    rclpy.spin(onfield)
    onfield.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()