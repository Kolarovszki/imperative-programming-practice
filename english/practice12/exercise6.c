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

bool isEmpty() {
    return (top == NULL);
}

int peek() {
    if (isEmpty())
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

int pop() {
    if (isEmpty())
    {
        printf("Error: The stack is empty");
        exit(1);
    }

    int weight = top->weight;

    Box* temp = top;
    top = top->next;

    free(temp);

    return weight;
}


int main() {
    initialize();

    assert(isEmpty());
    
    push(3);

    assert(peek() == 3);

    assert(pop() == 3);

    assert(isEmpty(top));

    return 0;
}
