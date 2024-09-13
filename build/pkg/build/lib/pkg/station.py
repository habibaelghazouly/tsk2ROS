#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from  example_interfaces.msg import Float32
from weather_interfaces.srv import DataCheck

class Remote_Station(Node):
    def __init__(self):
        super().__init__('remote_station')
        self.server_ = self.create_service(DataCheck , "remote" , self.callback)

        self.get_logger().info("Remote Station Server has started !")

    def callback(self , request , response):

        if(10 < request.temperature < 100):
            response.temp = True
            self.get_logger().info(f"Temperature : {request.temperature:.2f} C is valid and range")
        else :
            response.temp = False
            self.get_logger().error("Error in Temperature data!!")

        if(0.95 < request.pressure < 1.2):
            response.temp = True
            self.get_logger().info(f"Temperature : {request.pressure:.2f} atm is valid and range")
        else :
            response.temp = False
            self.get_logger().error("Error in Pressure data!!")  

        if(0.7 < request.humidity < 0.95):
            response.temp = True
            self.get_logger().info(f"Temperature : {request.humidity:.2f} % is valid and range")
        else :
            response.temp = False
            self.get_logger().error("Error in Humidity data!!")            

def main(args=None):
    rclpy.init(args=args)
    station = Remote_Station()
    rclpy.spin(station)
    station.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()