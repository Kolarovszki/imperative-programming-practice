#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>

struct Line{
    int counter;
    char *content;
};

typedef struct Line Line;

struct Lines{
    int capacity;
    int size;
    Line **array;
};

typedef struct Lines Lines;

/* this function handles the param fp pointer */
void countLines(FILE *fp);



#endif /* FUNCTIONS_H_INCLUDED */
