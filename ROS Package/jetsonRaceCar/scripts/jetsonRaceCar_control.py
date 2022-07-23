#!/usr/bin/env python3

# SPDX-FileCopyrightText: 2021 ladyada for Adafruit Industries
# SPDX-License-Identifier: MIT

# This simple test outputs a 50% duty cycle PWM single on the 0th channel. Connect an LED and
# resistor in series to the pin to visualize duty cycle changes and its impact on brightness.

#from board import SCL, SDA
#import busio

# Import the PCA9685 module.
from adafruit_pca9685 import PCA9685
from adafruit_servokit import ServoKit
import time
import rospy
from std_msgs.msg import Int32
from geometry_msgs.msg import Vector3
from board import SCL, SDA
import busio

#import adafruit_motor.servo as ads

# Create the I2C bus interface.
#i2c_bus = busio.I2C(SCL, SDA)

#servo = ads.Servo(servo_channel)

# Create a simple PCA9685 class instance.
#pca = PCA9685(i2c_bus)

# Set the PWM frequency to 60hz.
#pca.frequency = 50

# Set the PWM duty cycle for channel zero to 50%. duty_cycle is 16 bits to match other PWM objects
# but the PCA9685 will only actually give 12 bits of resolution.
#pca.channels[0].duty_cycle = 0x0000
#pca.channels[0].duty_cycle = 0x7FFF
#kit.servo[0].angle = 0
#kit.servo[0].angle = 180

def signal_callback(dat):
    angleValue = dat.y
    speedValue = dat.x
    kit.servo[0].angle = angleValue
    kit.servo[1].angle = speedValue
    print(dat)

if __name__ == "__main__":
    rospy.init_node('servo_control_node')
    #i2c_bus = busio.I2C(SCL, SDA)
    #pca = PCA9685(i2c_bus)
    kit = ServoKit(channels=16)
    print("program ready")
    kit.servo[0].angle = 78
    kit.servo[1].angle = 88
    try:
        rospy.Subscriber('/jetsonRaceCar/signal_control', Vector3, signal_callback)
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
