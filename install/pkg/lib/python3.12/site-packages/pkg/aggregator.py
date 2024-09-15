#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Float32
from weather_interfaces.srv import DataCheck
from functools import partial

class SensorSubscriber(Node):
    def __init__(self):
        super().__init__('sensor_subscriber')

        self.temperature = None
        self.pressure = None
        self.humidity = None

        self.subscription_temp = self.create_subscription(Float32,'temperature',self.temp_callback,10)

        self.subscription_press = self.create_subscription(Float32,'pressure',self.press_callback,10)

        self.subscription_humidity = self.create_subscription(Float32,'humidity',self.humidity_callback,10)
        
        self.get_logger().info("Aggregator has started !!")

        self.client = self.create_client(DataCheck, "remote")
        while not self.client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for service...")

    def temp_callback(self, msg):
        self.temperature = msg.data
        self.check_and_call_service()

    def press_callback(self, msg):
        self.pressure = msg.data
        self.check_and_call_service()

    def humidity_callback(self, msg):
        self.humidity = msg.data
        self.check_and_call_service()

    def check_and_call_service(self):
        if self.temperature is not None and self.pressure is not None and self.humidity is not None:
            self.call_service(self.temperature, self.pressure, self.humidity)       
    
    def call_service(self,temperature,pressure,humidity):
       
        request = DataCheck.Request()
        request.temperature = temperature
        request.pressure = pressure
        request.humidity = humidity

        future = self.client.call_async(request)
        future.add_done_callback(partial(self.callback_Data_Check))


    def callback_Data_Check(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Service response: temp_valid={response.temp}, press_valid={response.press}, humid_valid={response.humid}")
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}')



    # def temp_callback(self, msg):
    #     self.get_logger().info(f'Temperature: {msg.data:.2f} C')

    # def press_callback(self, msg):
    #     self.get_logger().info(f'Pressure: {msg.data:.2f} atm')

    # def humidity_callback(self, msg):
    #     self.get_logger().info(f'Humidity: {msg.data:.2f} %')
    #     self.get_logger().info('')

def main(args=None):
    rclpy.init(args=args)
    sensor_subscriber = SensorSubscriber()
    rclpy.spin(sensor_subscriber)
    sensor_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
