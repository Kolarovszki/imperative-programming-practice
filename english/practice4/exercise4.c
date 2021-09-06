#include <stdio.h>


/*
 * int: value of an integer
 * int*: memory location of an `int` (points to a memory location
 * where an `int` is stored.
 */

void print_array(int* arr) {
    int i;

    for (i = 0; i < 5; ++i) {
        printf("%d-th value: %d\n", i, arr[i]);
    }
}

int max(int* arr) {
    int i;

    int maximum_value = arr[0];
 
    for (i = 1; i < 5; ++i) {
        if (maximum_value < arr[i]) {
            maximum_value = arr[i];
        }
    }

    /**
     * i = 1: max: 3, arr[i]: 0, False
     * i = 3: max: 3, arr[i]: 4, True -> max = arr[i], new max is 4
     * i = 4: max: 4, arr[i]: 0, False
     */

    return maximum_value;
}


int main() {  // Caller function
    int arr[5] = {3, 0, 0, 4, 0};  // arr[0], arr[1], no arr[5]

    print_array(arr);

    printf("Max: %d\n", max(arr));
    return 0;
}
