#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct Box Box;

typedef struct Box {
    int weight;
    Box* next;
} Box;

Box* top;

void initialize() {
    top = NULL;
}

bool isEmpty(Box* box) {
    return (box == NULL);
}


int main() {
    initialize();

    assert(isEmpty(top));
 
    return 0;
}
