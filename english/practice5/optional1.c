#include <stdio.h>


int* max(int* arr, int d) {
    int* max_ptr = arr;
    
    int i;

    /**
     * arr: pointer to the 0th element
     * arr + 0: pointer to the 0th element
     * arr + n: pointer to the nth element
     */

    for (i = 0; i < d; ++i) {
        if (*(arr + i) > *max_ptr) {
            max_ptr = arr + i;
        }
    }
    
    
    return max_ptr;
}


int main() {
    int arr[] = {1, 2, 5, 4};  // int arr[] ~= int* arr

    int* max_ptr = max(arr, 4);

    printf("Pointer: %p, value: %d\n", max_ptr, *max_ptr);
    return 0;
}
