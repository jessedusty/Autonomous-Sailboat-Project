//
//  main.c
//  test
//
//  Created by Jesse Stevenson on 6/4/14.
//  Copyright (c) 2014 Littleben Creations. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define maxArgs 6
#define lengthOfArgs 10
#define maxInputLineLength 256

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
        printf("steering to: %s %s", args.data[1].data, args.data[2].data);
       
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
char line[1024];

void readLine() {

    
    char *eof;
    
    line[0] = '\0'; /* Ensure empty line if no input delivered */
    line[sizeof(line)-1] = ~'\0';  /* Ensure no false-null at end of buffer */
    
    eof = fgets(line, sizeof(line), stdin);
}

int main(int argc, const char * argv[])
{

    //char args[maxArgs][lengthOfArgs];
    struct command com;
    //{"S R0.000 S200", "M C20.2", "M S100", "T", "Y", "3", "7", "T", "J", "G HP", "G A70.0 O20.2", "R G P S"};
    readLine();
    printf("%s", line);
    com = splitInput("S R0.0 S200");
    
    processInput(com);
    printf("\n%s : %s \n", com.data[1].letter, com.data[1].value);
    
    return 0;
}
