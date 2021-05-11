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

void push(int weight) {
    Box* new_box = malloc(sizeof(Box));
    
    if (new_box == NULL) {
        perror("Could not allocate memory"); // stands for print error
        return;
    }

    new_box->weight = weight;
    new_box->next = top;

    top = new_box;
}



int main() {
    initialize();

    assert(isEmpty(top));
    
    push(3);

    assert(peek() == 3);


    return 0;
}
