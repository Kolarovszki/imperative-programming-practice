#include "func.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void filekezeles(FILE *fp){
    char buffer[BUFFER_SIZE];
    
    Line *lines;
    int capacity = 4;
    int size = 0;
    lines = (Line *)malloc(capacity * sizeof(Line));
    
    mallocCheck(lines);
    
    while( fgets(buffer, BUFFER_SIZE, fp) != NULL ){
        deleteNewLineCharacter(buffer);
        
        if (contains(lines, size, buffer)){
            /* if this was true, 
            counter is increased */
            /* intentionally do nothing */
        }else{
            /* adding buffer to lines */
            if (size == capacity){
                grow(&lines, &capacity);
            }
            
            lines[size].counter = 1;
            int length = strlen(buffer);
            lines[size].content = (char *)
                malloc((length+1)*sizeof(char));
            mallocCheck(lines[size].content);
            /* same as strcpy:
            for (int i = 0; i < length+1; i++){
                lines[size].content[i] = buffer[i];
            }
            */
            strcpy(lines[size].content, buffer);
            size++;
        }
    }
    
    order(lines, size);
    
    for (int i = 0; i < size; i++){
        printf("%d %s\n", lines[i].counter, lines[i].content);
        free(lines[i].content);
    }
    free(lines);
    

}


int contains(Line *lines, int size, char *buffer){
    for (int i = 0; i < size; i++){
        if (areEqual(lines[i].content, buffer)){
            lines[i].counter += 1;
            return 1;
        }
    }
    return 0;
}


void deleteNewLineCharacter(char *buffer){
    /* "alma\n" == ['a','l','m','a','\n','\0'] */
    int length = strlen(buffer);
    if (buffer[length-1] == '\n'){
            buffer[length-1] = '\0';
    }
    if (buffer[length-2] == '\r'){
        buffer[length-2] = '\0';
    }
}


void mallocCheck(void *p){
    if ( !p ){
        fprintf(stderr, "No memory\n");
        exit(2);
    }
}


int areEqual(char *str1, char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2){
        return 0;
    }
    for (int i = 0; i < len1; i++){
        char c1 = str1[i];
        char c2 = str2[i];
        if (c1 >= 'a' && c1 <= 'z'){
            c1 = c1 + 'A'-'a';
        }
        if (c2 >= 'a' && c2 <= 'z'){
            c2 = c2 + 'A'-'a';
        }
        
        if (c1 != c2){
            return 0;
        }
    }
    return 1;
}

void grow( Line **linesPtr, int *capacity ){
    *capacity *= 2;
    
    *linesPtr = (Line *)realloc(*linesPtr, *capacity * sizeof(Line));
    
    mallocCheck(*linesPtr);
}


void order(Line *lines, int size){
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if (lines[i].counter < lines[j].counter){
                Line temp = lines[i];
                lines[i] = lines[j];
                lines[j] = temp;
            }
        }
    }
}
