Autonomous-Sailboat-Project
===========================

Project to make an autonomous sailboat using a cheap RC sailboat from HobbyKing, an Arduino, an assortment of wind instruments, and an Adafruit BNO055 MPU. (see the propeller branch for the original electronics) 

This project aims to have a fully autonomous sailboat (i.e. no user control), that will sail around spots that I sail at and create maps of wind direction and speed for anylasis of how the wind moves around obstacles and to improve sailboat racing abilities!

It will also be adapted to take depth measurements. 

If this is all successful, this project aims to be able to take pictures with a GoPro at sailboat regattas.

The PC side code uses python, pyserial, and pygame for the communication to the module. 

Current Status
==============

Currently I am working on a land-roving robot that will use similar electronics and code to this project in order to prototype and resolve most of the bugs as it is often difficult to debug on the water. (see: https://github.com/jessedusty/land-bot)

Grandiose plans: 

- Stage 1: Manual Control via Logitech Dual Action Joystick
- Stage 2: Testing / running it in the water 
- Stage 3: Maintaining Compass Heading / staying on a compass corse 
- Stage 4: Tacking on command using Compass Heading (turn 90 degrees)
- Stage 5: GPS, read GPS values to computer
- Stage 6: Wind Direction, make wind vane, get working with USDigital Encoder, send info to Computer
- Stage 7: Maintianing Point of Sail to the Wind / Setting Sail Trim to current direction
- Stage 8: GPS position display on computer
- Stage 9: Navigating to GPS Coordinatates using wind direction for sail trim
- Stage 10: Follow a path of GPS Coordinates
- Stage 11: Record Values from Wind Direction and GPS and display on a map
- Stage 12: Add Wind Speed
- Stage 13: Object avoidance
- Stage 14: GoPro Control with Wifi Module
- Stage 15: Streaming video over XBee???


Created by Jesse Stevenson - littlebencreations.com - jessedusty@gmail.com

