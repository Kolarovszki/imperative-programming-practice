#include <stdio.h>

#include "parity_array.h"

/**
 * Return value: 0 if successful, 1 if not.
 */
int insertToParityArray(int* array, int item) {
    static int even_idx = 0;
    static int odd_idx = MAX_ARRAY_SIZE - 1;

    if (item < 0 || even_idx > odd_idx) {
        return 1;
    }

    if (item % 2 == 0) {
        array[even_idx] = item;
        even_idx = even_idx + 1;
    }
    else {
        array[odd_idx] = item;
        odd_idx = odd_idx - 1;
    }

    return 0;
}

void printParityArray(int* array) {
    int i;
    int item;

    for (i = 0; i < MAX_ARRAY_SIZE; ++i) {
        item = array[i]; 
        if (item >= 0) {
            printf("%d", item);
        }
    }
    printf("\n");
    return;
}
