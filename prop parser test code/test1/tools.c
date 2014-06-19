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

struct command splitInput(char * input) {
    //scanf("%[^\n]", input)
    //printf("%s\n", input);
    char s[maxInputLineLength];
    //char args[maxArgs][lengthOfArgs];
    struct command retVal;
    strcpy(s, input);
    char* token = strtok(s, " ");
    int i;
    for (i = 0; token && i < 6; i++) {
        printf("token: %s\n", token);
        strcpy(retVal.data[i].data, token);
        exractInfoFromArgument(&retVal.data[i]);
        token = strtok(NULL, " ");
    }
    return retVal;
}

void exractInfoFromArgument(struct argument *arg) {
    char * initial = arg->data;
    //printf("\n %s \n", initial);
    unsigned long LengthOfArg = strlen(initial);
    char newArg[LengthOfArg - 1];
    strncpy(newArg, &initial[1], LengthOfArg - 1);
    newArg[LengthOfArg - 1] = '\0';
    strcpy(arg->value, newArg);
    strncpy(arg->letter, &arg->data[0], 1);
}

void processInput(struct command args) {
    //char * arg = args.data[0];
    char * data = args.data[0].data;
    char * firstChar = &data[0];
    if (strcmp(&data[0], "S") == 0) {
        // steer
        //printf("steering to: %s %s", args.data[1].data, args.data[2].data);
       
    } else if (strcmp(firstChar, "M") == 0) {
        // maintain
    } else if (strcmp(firstChar, "T") == 0) {
        // stop
    } else if (strcmp(firstChar, "Y") == 0) {
        // stay
    } else if (strcmp(firstChar, "3") == 0) {
        // do 360
    } else if (strcmp(firstChar, "7") == 0) {
        // do 720
    } else if (strcmp(firstChar, "T") == 0) {
        // tack
    } else if (strcmp(firstChar, "J") == 0) {
        // gybe
    } else if (strcmp(firstChar, "G") == 0) {
        // autonomous
    } else if (strcmp(firstChar, "E") == 0) {
        // settings
    } else if (strcmp(firstChar, "R") == 0) {
        // request data
    } else {
        printf("    Command Not Found: %s", data);
    }
}

void getLine(char * x) {
    
    char c;
    
    
    x[0] = '\0'; 
    x[99] = ~'\0'; 
    
    
    for (int i = 0; i < 100; i++) {
        x[i] = 0;
    }
    int i = 0;
    c = fdserial_rxChar(xbee);
    while (c != 13) {
        if(c != -1)
        {
            x[i] = c;
            i++;
            //  dprint(xbee, "You Typed: %c \n", c);
        }
        c = fdserial_rxChar(xbee);
    }
    //  writeChar(xbee,CLS);
    //dprint(xbee, "finished %s", x);
    x[i] = 0;
    //  printf("%s", x);
    //return x;
}

int convertToInt(char * input) {
  return (int) strtol(input, (char **)NULL, 10);
}

void startXbee() {
 // xbee = fdserial_open(1, 0, 0, 9600); // first two params are pins
  
  printf("Connecting to Xbee... \n");
  xbee = fdserial_open(9,8,0,115200);
  dprint(xbee, "Autonmous Sailboat By Jesse \nReady: ");
  writeChar(xbee, CLS);
  printf("Xbee Initilized");
}