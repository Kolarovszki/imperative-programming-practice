#ifndef FUNC_H
#define FUNC_H

#include <stdio.h>

#define BUFFER_SIZE 1024

struct Line{
    int counter;
    char *content;
};
typedef struct Line Line;


void filekezeles(FILE *fp);
int contains(Line *lines, int size, char *buffer);
void deleteNewLineCharacter(char *buffer);
void mallocCheck(void *p);
int areEqual(char *str1, char *str2);
void grow( Line **lines, int *capacity );
void order(Line *lines, int size);



#endif

