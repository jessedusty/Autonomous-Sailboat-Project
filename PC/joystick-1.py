import pygame
import time
import serial
import math

ser = serial.Serial() 
ser = serial.Serial('/dev/cu.usbserial-A901QN4Q', 115200, timeout=1) 


def translate(value, leftMin, leftMax, rightMin, rightMax):
    # Figure out how 'wide' each range is
    leftSpan = leftMax - leftMin
    rightSpan = rightMax - rightMin

    # Convert the left range into a 0-1 range (float)
    valueScaled = float(value - leftMin) / float(leftSpan)

    # Convert the 0-1 range into a value in the right range.
    return rightMin + (valueScaled * rightSpan)

pygame.init()

pygame.joystick.init()
    
joystick = pygame.joystick.Joystick(0)
joystick.init()

lastSTransmission = 0;
lastRTransmission = 0;

print("Joystick initilized as {}".format(joystick.get_name()))
loop = 0;
mapped_sail = 900;
compassCourseEnabled = False;
ser.write("||||");
while True:
    loop += 1
    # EVENT PROCESSING STEP
    for event in pygame.event.get(): # User did something
        # Possible joystick actions: JOYAXISMOTION JOYBALLMOTION JOYBUTTONDOWN JOYBUTTONUP JOYHATMOTION
        if event.type == pygame.JOYBUTTONDOWN:
            #print("Joystick button pressed.");
            if (joystick.get_button(0) == True):
                compassCourseEnabled = True;
                ser.write("C");
                print("Course Toggle On");
        
        if event.type == pygame.JOYBUTTONUP:
            #print("Joystick button released.")
            if (joystick.get_button(0) == False and compassCourseEnabled == True):
                compassCourseEnabled = False;
                ser.write("C");
                print("Course Toggle Off");

    joy_left_x = joystick.get_axis(0);
    joy_left_y = joystick.get_axis(1);
    joy_right_x = joystick.get_axis(2);
    joy_right_y = joystick.get_axis(3);
    #print ("{:>6.3f}	{:>6.3f}	{:>6.3f}	{:>6.3f}".format(joy_left_x, joy_left_y, joy_right_x, joy_right_y))

    if (math.fabs(joy_right_y) > 0.05):
	    mapped_sail += translate(joy_right_y * -1, -1, 1, -25, 25);
	    if (mapped_sail > 900): mapped_sail = 900;
	    if (mapped_sail < 100): mapped_sail = 100; 

    mapped_rudder = translate(joy_left_x * -1, -1, 1, 1800, 100) - 46;
    if (mapped_rudder > 1250): mapped_rudder = 1250;

    if (lastRTransmission != mapped_rudder or lastSTransmission != mapped_sail):
        ser.write("S{}|{}|".format(int(mapped_rudder), int(mapped_sail)));
        print("S|{}|{}|\n".format(int(mapped_rudder), int(mapped_sail)));
        lastSTransmission = mapped_sail;
        lastRTransmission = mapped_rudder;
        ser.readline();
        time.sleep(0.05);






