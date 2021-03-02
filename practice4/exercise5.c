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

    return maximum_value;
}

int second_max(int *arr) {
    /**
     * Doesn't work when the first value is the maximum.
     */

    int maximum_value = max(arr);

    int second_maximum = arr[0];

    int i;

    for (i = 0; i < 5; ++i) {
        if (second_maximum < arr[i] && arr[i] != maximum_value) {
            second_maximum = arr[i];
        }
    }
    return second_maximum;
}


int main() {  // Caller function
    int arr[5] = {3, 1, 2, 4, 0};  // arr[0], arr[1], no arr[5]

    print_array(arr);

    printf("Max: %d\n", second_max(arr));
    return 0;
}
