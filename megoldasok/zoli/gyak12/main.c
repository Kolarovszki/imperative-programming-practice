#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Box {
    int weight;
    struct Box* next;
} Box;


Box* top;


void initialize() {
    top = NULL;
}

bool isEmpty() {
    if (top == NULL) {
        return true;
    }
    return false;
}

int peek() {
    if (isEmpty()) {
        perror("Stack is empty!");
        exit(1);
    }

    return top->weight;
}


void push(int weight) {
    Box* box = malloc(sizeof(Box));

    if (box == NULL) {
        perror("Nincs elég memória!");
        exit(1);
    }

    box->weight = weight;
    box->next = top;
    
    top = box;
}

void pop() {    
    if (isEmpty()) {
        perror("Pop could not be performed! Stack is empty!");
        exit(1);
    }

    Box* new_top = top->next;
    free(top);
    top = new_top;
}

void copyTop() {
    push(top->weight);
}


void printStack() {
    Box* current_box = top;
    
    printf("[");
    while (current_box != NULL) {
        printf("%d ", current_box->weight);
        current_box = current_box->next;
    }
    printf("]\n");
}


int main() {
    initialize();

    printf("Stack is %s.\n", isEmpty() ? "empty" : "not empty");

    push(3); 
    push(42);

    push(-1);

    copyTop();
    
    printStack();

    // Felszabadítás
    while (!isEmpty()) {
        pop();
    }

    return 0;
}
