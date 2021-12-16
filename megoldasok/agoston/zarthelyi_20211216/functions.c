#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functions.h"

#define BUFFSIZE 1024


/* declarations of static functions */
/* these functions can be used just in this compilation unit */
static Lines *newLines(void);
static int contains(Lines *lines, char *buffer);
static void addLine(Lines *lines, char *buffer);
static int compare(char *content, char *buffer);
static void orderElems(Lines *lines);


/* Helper functions */
/* Swapping two elements in a Line array */
static void swap(Line **first, Line **second);
/* checking whether a pointer is NULL or not */
static void pointerCheck(void *p);
/* deleting \n and \r characters from a character array */
static void deleteZeroCharsFromEnd(char *buffer);


void countLines(FILE *fp){
    /* character array for storing the current line */
    char buffer[BUFFSIZE];
    
    /* generating object for the lines */
    Lines *lines = newLines();
    
    pointerCheck(lines);
    
    while (fgets(buffer, BUFFSIZE, fp)){
        /* eliminating whitespace characters from buffer */
        deleteZeroCharsFromEnd(buffer);
        
        /* if the lines already contains the buffer, the counter is increased inside contains */
        if (!contains(lines, buffer)){
            /* otherwise new line is added with content buffer */
            addLine(lines, buffer);
        }
    }
    
    /* ordering lines by the counters */
    orderElems(lines);
    
    /* printing lines */
    for (int i = 0; i < lines->size; i++){
        fprintf(stdout, "%d %s\n", lines->array[i]->counter, lines->array[i]->content);
    }
    
    /* freeing pointers from inside */
    for (int i = 0; i < lines->size; i++){
        free(lines->array[i]->content);
    }
    /* freeing main array */
    free(lines->array);
    /* freeing main Lines object */
    free(lines);
}


/* create a new object of Lines with default sizes */
static Lines *newLines(void){
    Lines *lines = (Lines *)malloc(sizeof(Lines));
    
    pointerCheck(lines);
    
    lines->capacity = 4;
    lines->size = 0;
    lines->array = (Line **)malloc(lines->capacity * sizeof(Line *));
    
    return lines;
}


/* checking whether param lines contains param buffer */ 
static int contains(Lines *lines, char *buffer){
    for (int i = 0; i < lines->size; i++){
        /* compare returns 1 if the strings are the same */
        if (compare(lines->array[i]->content, buffer)){
            /* increase counter */
            (lines->array[i]->counter)++;
            /* returning true to note that this line was handled */
            return 1;
        }
    }
    /* if the buffer was nowhere found, returning false */
    return 0;
}


/* adding to the param lines a new Line object with content param buffer */
static void addLine(Lines *lines, char *buffer){
    /* checking if the array has to be increased */
    if (lines->size == lines->capacity){
        lines->capacity *= 2;
        lines->array = (Line **)realloc(lines->array, lines->capacity * sizeof(Line *));

        pointerCheck(lines->array);
    }
    
    int length = strlen(buffer);
    /* allocate memory for the character array */
    char *newString = (char *)malloc((length+1) * sizeof(char));  
    
    pointerCheck(newString);
    
    /* copying character array into the new array on heap */
    strcpy(newString, buffer);
    newString[length] = '\0'; /* end character */
    
    /* allocate memory for the new elem of Line */
    lines->array[lines->size] = (Line *)malloc(sizeof(Line));
    
    pointerCheck(lines->array[lines->size]);
    
    lines->array[lines->size]->content = newString;
    lines->array[lines->size]->counter = 1;
    
    lines->size++;
}



/* comparing two character arrays in a case insensitive manner */
static int compare(char *content, char *buffer){
    int len1 = strlen(content);
    int len2 = strlen(buffer);
    if (len1 == len2){
        for (int i = 0; i < len1; i++){
            char c1 = content[i];
            char c2 = buffer[i];
            if (c1 >= 'A' && c1 <= 'Z'){
                /* converting c1 to lower case */
                c1 = c1 + 'a' - 'A';
            }
            if (c2 >= 'A' && c2 <= 'Z'){
                /* converting c2 to lower case */
                c2 = c2 + 'a' - 'A';
            }
            if (c1 != c2){
                /* if they are not the same then returning false */
                return 0;
            }
        }
    }else{
        /* since length are not the same they can not be the same */
        return 0;
    }
    return 1;
}


/* ordering elements in param lines */
static void orderElems(Lines *lines){
    for (int i = 0; i < lines->size; ++i){
        for (int j = i + 1; j < lines->size; ++j){
            if (lines->array[i]->counter < lines->array[j]->counter){
                swap(lines->array + i, lines->array + j);
            }
        }
    }
}


/* swap two elems */
static void swap(Line **first, Line **second){
    Line *tmp = *second;
    *second = *first;
    *first = tmp;
}


/* just make the code easily understandible */
void pointerCheck(void *p){
    if (!p){
        fprintf(stderr, "No memory available\n");
        exit(1);
    }
}


/* removing all whitespace characters from the array (it was in the exercise that we can assume that there are no whitespaces in the lines */
void deleteZeroCharsFromEnd(char *buffer){
    int length = strlen(buffer);
    for (int i = 0; i < length; i++){
        if (buffer[i] == '\r' || buffer[i] == '\n'){
            /* ending character array */
            buffer[i] = '\0';
            return;
        }
    }
}

