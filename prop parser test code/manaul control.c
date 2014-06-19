#include "simpletools.h"                      // Include simple tools
#include "fdserial.h"
#include <string.h>
#include "servo.h"

fdserial *term;

#define vs  10

int rudderPosition, sailPosition;
int lastRudderPosition, lastSailPosition;
char new; 

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

  term = fdserial_open(9, 8, 0, 115200);
  new = 0; 
  while (1) {
    new = fdserial_rxChar(term); 
    switch (new) {
      case 'S':
        getSailStuff();         
        break;
      default:
        dprint(term, "Got something else \n");
        break;
    }
  }


    
}
