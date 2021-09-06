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

int peek() {
    if (isEmpty(top))
    {
        printf("Error: The stack is empty");
        exit(1);
    }
    
    return top->weight;
}


int main() {
    initialize();

    assert(isEmpty(top));

    peek();

    return 0;
}
