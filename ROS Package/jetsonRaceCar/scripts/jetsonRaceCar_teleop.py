#!/usr/bin/env python

from __future__ import print_function

import roslib; roslib.load_manifest('teleop_twist_keyboard')
import rospy
from geometry_msgs.msg import Twist, Vector3

import sys, select, termios, tty

msg = """
Welcome to
jetsonRaceCar Base Controller Program
"""

moveBindings = {
	'w':( -1. , 0. , 0.),
	'x':( 1. , 0. , 0.),	
}

steeringBindings = {
	'q':( 0. ,-40. , 0.),
	'a':( 0. , -1. , 0.),
	'd':( 0. ,  1. , 0.),
	'e':( 0. , 40. , 0.),
}

stopBindings = {
	's':( 0.,  78.,  0.),
}

drive_speed = 88.0
steering_angle = 78.0

def getKey():
	tty.setraw(sys.stdin.fileno())
	select.select([sys.stdin], [], [], 0)
	key = sys.stdin.read(1)
	termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
	return key

if __name__=="__main__":
    	settings = termios.tcgetattr(sys.stdin)

	rospy.init_node('teleop_controller_node')
	base_publisher = rospy.Publisher('/jetsonRaceCar/signal_control', Vector3, queue_size = 1)
	mov = Vector3()
	try:
		print(msg)
		while(1):
			key = getKey()
			if key in moveBindings.keys():
				drive_speed += moveBindings[key][0]      
			elif key in steeringBindings.keys():
				steering_angle += steeringBindings[key][1]
			elif key in stopBindings.keys():
				steering_angle = stopBindings[key][1]
			else:
				drive_speed = 88.; steering_angle = 78.;
				if (key == '\x03'):
					break	
			mov.x  = drive_speed
			mov.y  = steering_angle
			base_publisher.publish(mov)
		
	except Exception as e:
		print(e)

	finally:
		mov.x  = 88.
		mov.y  = 78.
		mov.z  = 0.		
		
    		termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
