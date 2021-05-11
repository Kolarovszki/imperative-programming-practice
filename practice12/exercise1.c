#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Box Box;

typedef struct Box {
    int weight;
    Box* next;
} Box;

int main() {
    Box *box0 = malloc(sizeof(Box));
    box0->weight = 2;
    box0->next = NULL;
    
    assert(box0->weight == 2);

    Box *box1 = malloc(sizeof(Box));
    box1->weight = 3;

    // Append to the list:

    box0->next = box1;
    box1->next = NULL;

    assert(box1->weight == 3);
    
    Box* current = box0;
    Box* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
