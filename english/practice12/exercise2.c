#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Box Box;

typedef struct Box {
    int weight;
    Box* next;
} Box;

Box* top;

void initialize() {
    top = NULL;
}


int main() {
    initialize();
    
    return 0;
}
