#include <stdio.h>

#include "parity_array.h"


void initParityArray(ParityArray* parity_array) {
    int i;
    for (i = 0; i < MAX_ARRAY_SIZE; i++) {
        parity_array->array[i] = -1;
    }

    parity_array->even_idx = 0;
    parity_array->odd_idx = MAX_ARRAY_SIZE - 1;
}

/**
 * Return value: 0 if successful, 1 if not.
 */
int insertToParityArray(ParityArray* parity_array, int item) {
    if (item < 0 || parity_array->even_idx > parity_array->odd_idx) {
        return 1;
    }

    if (item % 2 == 0) {
        parity_array->array[parity_array->even_idx] = item;
        parity_array->even_idx = parity_array->even_idx + 1;
    }
    else {
        parity_array->array[parity_array->odd_idx] = item;
        parity_array->odd_idx = parity_array->odd_idx - 1;
    }

    return 0;
}

void printParityArray(ParityArray* parity_array) {
    int i;
    int item;

    for (i = 0; i < MAX_ARRAY_SIZE; ++i) {
        item = parity_array->array[i]; 
        if (item >= 0) {
            printf("%d", item);
        }
    }
    printf("\n");
    return;
}
