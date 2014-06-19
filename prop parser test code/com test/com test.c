#include "simpletools.h"
#include "fdserial.h"

fdserial *xbee;

int main()
{
  xbee = fdserial_open(9, 8, 0, 115200);

  writeChar(xbee, CLS);
  dprint(xbee, "Click this terminal, \n");
  dprint(xbee, "and type on keybaord...\n\n");

  char c;
 
  while(1)
  {
    c = fdserial_rxChar(xbee);
    if(c != -1)
    {
      dprint(xbee, "You typed: %c\n", c);
    }
  }  
}