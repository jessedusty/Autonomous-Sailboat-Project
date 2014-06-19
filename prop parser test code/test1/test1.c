/*
  Standard Servo Position.c
  
  Moves servo to 0, 90 and 180 degrees.  Holds each position for 2 s.
  Connect servo to P3 port on Propeller Activity Board.
  
  http://learn.parallax.com/propeller-c-simple-devices/standard-servo
*/

#include "simpletools.h"                      // Include simpletools header
#include "servo.h"                            // Include servo header
#include "fdserial.h"
#include "tools.h"



int main()                                    // main function
{
  servo_angle(2, 900);
  //servo_angle(3, 900);
  
  startXbee();

  struct command com;

  char * input;
  while (1) {    
    getLine(input);
    com = splitInput(input);
    processInput(com);

    int rudder, sail;
    rudder = convertToInt(com.data[1].value);
    sail = convertToInt(com.data[2].value);

    printf("\n%d : %d \n", rudder, sail);

    if (rudder < 0) rudder = 0;
    if (rudder > 1800) rudder = 1800;
    if (sail < 100) sail = 100; 
    if (sail > 1800) sail = 1800;

    servo_angle(2, rudder);
    servo_angle(3, sail);
    dprint(xbee, "\nReady: ");
  }

}