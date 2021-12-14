#include <stdio.h>

#include "parity_array.h"

int main() {
    int array[MAX_ARRAY_SIZE];
    int i;

    for (i = 0; i < MAX_ARRAY_SIZE; i++) {
        array[i] = -1;
    }

    printParityArray(array); // Ures kiiras
    
    insertToParityArray(array, 1);
    insertToParityArray(array, 2);
    insertToParityArray(array, 0);
    insertToParityArray(array, 2);

    printParityArray(array); // Teli kiiras

    return 0;
}
