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
#import adafruit_motor.servo as ads

# Create the I2C bus interface.
#i2c_bus = busio.I2C(SCL, SDA)

kit = ServoKit(channels=16)
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
kit.servo[0].angle = 50
kit.servo[1].angle = 88

