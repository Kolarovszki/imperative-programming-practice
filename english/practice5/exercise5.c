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


int sum(int* first_cell, int* cell_after_last) { 
    int i;

    int sum = 0;
    
    for (i = 0; (first_cell + i) < cell_after_last; ++i) {
        sum = sum + *(first_cell + i);  // arr[i] == *(arr + i)
        // second_cell == first_cell + 1
    }

    return sum;
}



int main() {  // Caller function

    int arr[5] = {3, 0, 0, 4, 0};  // arr[0], arr[1], no arr[5]

    print_array(arr);

    int arraySum = sum(arr, arr + 5);

    printf("Sum: %d\n", arraySum);
    return 0;
}
