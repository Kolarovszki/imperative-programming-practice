#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "reverse.h"

#define INITCAP 8
#define BUFSIZE 1024

char** read(FILE* fp, char** lines, int* lSize) {
    *lSize = 0;

    int capacity = INITCAP;

    lines[0] = malloc(BUFSIZE * sizeof(char));

    if (lines[0] == NULL) {
        printf("Memory error!");
        exit(1);
    }

    while( (fscanf(fp, "%s", lines[*lSize]) != EOF) ) { 
        ++(*lSize);
        lines[*lSize] = malloc(BUFSIZE * sizeof(char));

        if (lines[*lSize] == NULL) {
            printf("Memory error!");
            exit(1);
        }
    
        if (*lSize == capacity) {
            capacity = 2 * capacity;
            lines = realloc(lines, capacity * sizeof(char*));
            
            if (lines == NULL) {
                printf("No memory available for allocation!");
                exit(1);
            }
            
        }
    }

    return lines;
}

void print_reversed(char* line) {
    int i;
    int length = strlen(line);

    for (i = (length - 1); i >= 0; --i) {
        printf("%c", line[i]);
    }
}


void write(char **lines, int size) {
    int i;

    for (i = (size - 1); i >= 0; --i) {
        printf("%d ", i + 1);
        print_reversed(lines[i]);
        printf("\n");
    }
}


void reverse(FILE* fp) {
    char** lines = malloc(INITCAP * sizeof(char*));

    if (lines == NULL) {
        printf("No memory available for allocation!");
        exit(1);
    }

    int lSize = 0;

    lines = read(fp, lines, &lSize);

    write(lines, lSize);

    int i;

    for (i = 0; i < lSize; ++i) {
        free(lines[i]);
    }

    free(lines);
}
