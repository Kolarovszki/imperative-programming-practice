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


double sum(int* arr, double* weights, int size) { 
    int i;

    double sum = 0;
    for (i = 0; i < size; ++i) {
        sum = sum + weights[i] * arr[i];  // Weighted sum
        // (w1, w2, w3), (a1, a2, a3) : weigthed_sum = w1 * a1 + w2 * a2 + w3 * a3
    }

    return sum / size;
}



int main() {  // Caller function
    int arr[5] = {1, 2, 3, 4, 5};  // arr[0], arr[1], no arr[5]
    double weights[5] = {0.2, 0.4, 2, 4.2, 4};

    int size = 5;

    print_array(arr);

    printf("Sum: %f\n", sum(arr, weights, size));
    return 0;
}
