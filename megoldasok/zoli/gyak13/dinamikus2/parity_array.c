#include <stdio.h>
#include <stdlib.h>

#include "parity_array.h"


int initParityArray(ParityArray* parity_array, int size) {
    parity_array->array = malloc(size * sizeof(int));

    if (parity_array->array == NULL) {
        return 1;
    }

    parity_array->size = size;

    parity_array->even_idx = 0;
    parity_array->odd_idx = parity_array->size - 1;

    return 0;
}

/**
 * Return value: 0 if successful, 1 if not.
 */
int insertToParityArray(ParityArray* parity_array, int item) {
    if (parity_array->even_idx > parity_array->odd_idx) {
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

    for (i = 0; i < parity_array->even_idx; ++i) {
        item = parity_array->array[i]; 
        printf("%d", item);
    }

    for (
         i = parity_array->odd_idx + 1;
         i < parity_array->size;
         ++i
    ) {
        item = parity_array->array[i]; 
        printf("%d", item);
    }

    printf("\n");
    return;
}


void disposeParityArray(ParityArray* parity_array) {
    
    free(parity_array->array);

    parity_array->odd_idx = 0;
    parity_array->even_idx = 0;
    parity_array->size = 0;
}
