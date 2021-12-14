
#include <stdio.h>

#define MAX_ARRAY_SIZE 32

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
