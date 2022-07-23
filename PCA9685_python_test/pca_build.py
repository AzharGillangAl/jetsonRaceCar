#!/usr/bin/env python3

from adafruit_pca9685 import PCA9685
import adafruit_motor.servo
from board import SCL, SDA
import busio

i2c_bus = busio.I2C(SCL, SDA)
pca = PCA9685(i2c_bus)
pca.frequency = 50
pca.channels[0].duty_cycle = 
