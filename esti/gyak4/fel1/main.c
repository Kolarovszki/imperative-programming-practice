#include <stdio.h>

#define LENGTH 12

int sum(int arr[], int length);

int main(){
    /*int arr[] = {1, 2, 3, 4};*/
    int arr[LENGTH];
    int i;
    
    for (i = 0; i < LENGTH; i++){
        arr[i] = i;
    }
    printf("Sum: %d\n", sum(arr, LENGTH));
    return 0;
}



int sum(int arr[], int length){
    int s = 0;
    int i;
    for (i = 0; i < length; i += 1){
        s += arr[i];
    }
    return s;
}
