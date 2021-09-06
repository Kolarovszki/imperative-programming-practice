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


int sum(int* arr, int* weights) { 
    int i;

    int sum = 0;
    for (i = 0; i < 5; ++i) {
        sum = sum + weights[i] * arr[i];  // Weighted sum
        // (w1, w2, w3), (a1, a2, a3) : weigthed_sum = w1 * a1 + w2 * a2 + w3 * a3
    }

    return sum;
}



int main() {  // Caller function
    int arr[5] = {1, 2, 3, 4, 5};  // arr[0], arr[1], no arr[5]
    int weights[5] = {1, 1, 2, 3, 4};

    print_array(arr);

    printf("Sum: %d\n", sum(arr, weights));
    return 0;
}
