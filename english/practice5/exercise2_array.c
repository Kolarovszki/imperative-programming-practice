#include <stdio.h>

// 3rd

void swap(int* arr) {
    int temp;

    printf("%p\n", arr);

    int original_value_first = *arr;  // arr[0] == *arr

    *arr = *(arr + 1); // arr[i] == *(arr + i), pointer arithmetic

    *(arr + 1) = original_value_first;
}


int main() {

    int arr[] = {1, 2};

    printf("%p\n", arr);

    swap(arr);

    // TASK: arr == {2, 1};

    printf("arr[0]: %d\narr[1]: %d\n", arr[0], arr[1]);
}
