#include "simpletools.h"                      // Include simple tools
#include "fdserial.h"
#include <string.h>
#include "servo.h"
#include "compass3d.h"

fdserial *term;

#define vs  10

int rudderPosition, sailPosition;
int lastRudderPosition, lastSailPosition;
char new; 

i2c *bus;

int convertToInt(char * input) {
  return (int) strtol(input, (char **)NULL, 10);
}


void getSailStuff() {
  dprint(term, "Got an S \n");
  char rudder[vs];
  char sail[vs];
  new = fdserial_rxChar(term);
  int i;
  for (i = 0; new != '|' && i < vs; i++) {
   rudder[i] = new; 
   new = fdserial_rxChar(term);
  }
  rudder[i] = 0;

  new = fdserial_rxChar(term);
  for (i = 0; new != '|' && i < vs; i++) {
    sail[i] = new; 
    new = fdserial_rxChar(term);
  }
  sail[i] = 0;

  rudderPosition = convertToInt(rudder);
  sailPosition = convertToInt(sail);

  dprint(term, "%d  %d\n", rudderPosition, sailPosition);
  moveServos();
}

int compassEnabled;
int x, y, z;
float target;
float heading; 

void manageCompass() {
  compassEnabled = 1;
  compass_read(bus, &x, &y, &z);
  float fy = (float) y;                     // Ints to floats
  float fx = (float) x;
  heading = atan2(fy, fx) * 180.0/PI; // Calculate heading with float
  target = heading;
  while (compassEnabled == 1) {
    compass_read(bus, &x, &y, &z);
    float fy = (float) y;                     // Ints to floats
    float fx = (float) x;
    heading = atan2(fy, fx) * 180.0/PI; // Calculate heading with floats
    rudderPosition = 900 + (int)((heading - target) * 10);
    if (rudderPosition < 100) rudderPosition = 100;
    if (rudderPosition > 1250) rudderPosition = 1250;
    moveServos();
    pause(20);
  }
  cogstop(cogid());
}



void moveServos() {
  if (lastRudderPosition != rudderPosition) {
    servo_angle(2, rudderPosition);
    lastRudderPosition = rudderPosition;
  } 
  if (lastSailPosition != sailPosition) {
    servo_angle(3, sailPosition);
    lastSailPosition = sailPosition;
  }
}
int main()                                    // Main function
{ 
  servo_start(); 
  simpleterm_close();

  bus = i2c_newbus(1, 0, 0);   
  compass_init(bus);

  term = fdserial_open(9, 8, 0, 115200);
  new = 0; 
  while (1) {
    new = fdserial_rxChar(term); 
    switch (new) {
      case 'S':
        getSailStuff();         
        break;
      case 'C':
        if (compassEnabled == 0) {
          dprint(term, "Maintianing Course\n");
          cog_run(&manageCompass, 60);           
        } else {
          compassEnabled = 0;
          dprint(term, "Regular Control\n");
        }
        break;
      default:
        if (compassEnabled == 1) {
          dprint(term, "Current Rudder Postition: %d \n Target: %f \n Compass: %f\n", rudderPosition, target, heading);
        } else {
          dprint(term, "Got something else \n");
        }
        break;
    }
  }


    
}
