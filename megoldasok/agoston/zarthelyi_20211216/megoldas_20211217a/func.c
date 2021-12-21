#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "func.h"

#define BUFFERSIZE 1024

struct Line{
    int counter;
    char *content;
};
typedef struct Line Line;

typedef Line *Line_t;

struct CountedLines{
    int currentSize;
    int capacity;
    Line_t *elements;
};
typedef struct CountedLines CountedLines;
typedef CountedLines *CountedLines_t;

static CountedLines_t emptyCountedLines(void);
static void addLine(CountedLines_t cl, char *buffer);
static void sort(CountedLines_t cl);
static void print(CountedLines_t cl);
static char *copyOfStr(char *str);
static void removeEndline(char* buffer);
static void disposeCounteLines(CountedLines_t cl);
static int areStringsEqual(char *str1, char *str2);
static char tolowerCase(char c);

/* from valid fstream we read in all data */
void calcLines(FILE *fstream){
    char buffer[BUFFERSIZE];
    CountedLines_t cl = emptyCountedLines();
    
    while ( fgets(buffer, BUFFERSIZE, fstream) ){
        removeEndline(buffer);
        addLine(cl, buffer);
    }
    
    sort(cl);

    print(cl);
    
    disposeCounteLines(cl);
}



static CountedLines_t emptyCountedLines(void){
    CountedLines_t cl = (CountedLines_t)malloc(sizeof(CountedLines));
    
    cl->currentSize = 0;
    cl->capacity = 4;
    
    cl->elements = (Line_t *)malloc(cl->capacity * sizeof(Line_t));
    
    if (!cl->elements){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    return cl;
}


static void addLine(CountedLines_t cl, char *buffer){
    for (int i = 0; i < cl->currentSize; ++i){
        if (areStringsEqual(cl->elements[i]->content, buffer)){
            cl->elements[i]->counter += 1;
            return;
        }
    }
    
    /* increase lines array if needed */
    if (cl->currentSize == cl->capacity){
        cl->capacity *= 2;
        cl->elements = (Line_t *)realloc(cl->elements, cl->capacity * sizeof(Line_t));
        
        if ( !cl->elements ){
            fprintf(stderr, "No memory\n");
            exit(1);
        }
    }
    
    cl->elements[cl->currentSize] = (Line_t)malloc(sizeof(Line));
    if ( !cl->elements[cl->currentSize] ){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    cl->elements[cl->currentSize]->counter = 1;
    cl->elements[cl->currentSize]->content = copyOfStr(buffer);
    cl->currentSize += 1;    
}


static void sort(CountedLines_t cl){
    for ( int i = 0; i < cl->currentSize; i++){
        for ( int j = i+1; j < cl->currentSize; j++){
            if (cl->elements[i]->counter < cl->elements[j]->counter){
                Line_t temp = cl->elements[i];
                cl->elements[i] = cl->elements[j];
                cl->elements[j] = temp;
            }
        }
    }
}
static void print(CountedLines_t cl){
    for (int i = 0; i < cl->currentSize; ++i){
        fprintf(stdout, "%d %s\n", cl->elements[i]->counter, cl->elements[i]->content);
    }
}

static char *copyOfStr(char *str){
    int length = strlen(str);
    char *p = (char *)malloc((length+1)*sizeof(char));
    if ( !p ){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    
    strcpy(p, str);
    return p;
}

static void removeEndline(char* buffer){
    int length = strlen(buffer);
    for (int i = 0; i < length; i++){
        if (buffer[i] == '\n'){
            buffer[i] = '\0';
            return;
        }
    }
}


static void disposeCounteLines(CountedLines_t cl){
    for (int i = 0; i < cl->currentSize; ++i){
        free(cl->elements[i]->content);
        free(cl->elements[i]);
    }
    free(cl->elements);
    free(cl);
}


static int areStringsEqual(char *str1, char *str2){
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    
    if (length1 != length2){
        return 0;
    }
    
    for (int i = 0; i < length1; i++){
        char c1 = tolowerCase(str1[i]);
        char c2 = tolowerCase(str2[i]);
        if (c1 != c2)
            return 0;
    }
    return 1;

}

static char tolowerCase(char c){
    if ('A' <= c && c <= 'Z'){
        return c + 'a' - 'A';
    }
    return c;
}
