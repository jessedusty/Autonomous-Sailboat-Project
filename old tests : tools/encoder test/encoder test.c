#include "simpletools.h" 
/**
 * This is the main encoder test program file.
 * Using USDigital MA3 encoder for wind direction (possibly wind speed as well)
 */
int main(void)
{
  while (1) {
    long on = pulse_in(15,1);
    long off = pulse_in(15,0);
    
    int x = (int)(on * (long)1026 / (long)(on + off)) - 1;

    if (x > 1024) x = 1024;
    if (x < 0) x = 0; 
    printf("Pos: %d\n", x); 
    pause(10); 
}

  return 0;
}

