#include "simpletools.h"
#include "fdserial.h"
#include <stdio.h>
#include <string.h>

#define maxArgs 6
#define lengthOfArgs 10
#define maxInputLineLength 256


fdserial *xbee;



struct argument {
    char data[lengthOfArgs];
    char letter[2];
    char value[lengthOfArgs];

};
struct command {
    struct argument data[maxArgs];
};


void exractInfoFromArgument(struct argument *arg);

struct command splitInput(char * input);
void exractInfoFromArgument(struct argument *arg);
void processInput(struct command args);
void getLine(char * x);
int convertToInt(char * input);
void startXbee();