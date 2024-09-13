#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Float32
from weather_interfaces.srv import DataCheck

class SensorSubscriber(Node):
    def __init__(self):
        super().__init__('sensor_subscriber')
        self.subscription_temp = self.create_subscription(Float32,'temperature',self.temp_callback,10)

        self.subscription_press = self.create_subscription(Float32,'pressure',self.press_callback,10)

        self.subscription_humidity = self.create_subscription(Float32,'humidity',self.humidity_callback,10)
        
        self.get_logger().info("Subscriber has started")

    def temp_callback(self, msg):
        self.get_logger().info(f'Temperature: {msg.data:.2f} C')

    def press_callback(self, msg):
        self.get_logger().info(f'Pressure: {msg.data:.2f} atm')

    def humidity_callback(self, msg):
        self.get_logger().info(f'Humidity: {msg.data:.2f} %')
        self.get_logger().info('')

def main(args=None):
    rclpy.init(args=args)
    sensor_subscriber = SensorSubscriber()
    rclpy.spin(sensor_subscriber)
    sensor_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
