#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "function.h"

struct Line{
    int counter;
    char *content;
};
typedef struct Line Line;

int areEqual(char *str1, char *str2);
void grow(Line **lines, int *capacity);
char *copyOf(char *buffer);

void calculateLines(FILE *f){
    int capacity = 4;
    int counter = 0;
    Line *lines = (Line *)malloc(capacity * sizeof(Line));
    if ( !lines ){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    char buffer[1024];
    
    
    while( fgets(buffer, 1024, f) ){
        /* storing the bool whether the line occured before or not */
        int wasBefore = 0;
        for (int i = 0; i < counter; ++i){
            /* areEqual is true if the two strings are the same */
            if (areEqual(lines[i].content, buffer)){
                lines[i].counter += 1;
                wasBefore = 1;
            }
        }
        
        /* if wasn't found before, we add to the lines array */
        if ( !wasBefore ){
            if (capacity == counter){
                /* growing the array is needed */
                grow(&lines, &capacity);
            }
            lines[counter].counter = 1;
            lines[counter].content = copyOf(buffer);
            counter++;
        }
    }
    
    for (int i = 0; i < counter; ++i)
        for (int j = i+1; j < counter; ++j){
            if (lines[i].counter < lines[j].counter){
                Line temp = lines[i];
                lines[i] = lines[j];
                lines[j] = temp;
            }
        }

    for (int i = 0; i < counter; ++i){
        fprintf(stdout, "%d %s", lines[i].counter, lines[i].content);
        free(lines[i].content);
    }
    
    free(lines);
}


/* comparing two strings */
int areEqual(char *str1, char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2)
        return 0;
    for (int i = 0; i < len1; i++){
        char c1 = str1[i];
        char c2 = str2[i];
        if (c1 <= 'z' && c1 >= 'a')
            c1 += 'A' - 'a';
        if (c2 <= 'z' && c2 >= 'a')
            c2 += 'A' - 'a';
            
        if ( c1 != c2 )
            return 0;
    }
    return 1;
}


/* growing the array lines. We want to change the values of the parameters => we are passing pointers */
void grow(Line **lines, int *capacity){
    *capacity *= 2; /* double cap */
    *lines = (Line *)realloc(*lines, *capacity * sizeof(Line));
    /* checking result of realloc */
    if ( !lines ){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
}


/* creating copy of buffer on heap */
/* endline character stays in the buffer */
char *copyOf(char *buffer){
    char *p = (char *)malloc((strlen(buffer)+1)*sizeof(char));
    
    if ( !p ){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    
    strcpy(p, buffer);
    return p;
}
