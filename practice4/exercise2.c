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


int sum(int* arr) { 
    int i;

    int sum = 0;
    for (i = 0; i < 5; ++i) {
        sum = sum + arr[i];
    }

    return sum;
}



int main() {  // Caller function
    int arr[5] = {3, 0, 0, 4, 0};  // arr[0], arr[1], no arr[5]

    print_array(arr);

    printf("Sum: %d\n", sum(arr));
    return 0;
}
