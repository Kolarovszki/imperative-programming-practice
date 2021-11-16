#include <stdio.h>


int maximal(int arr[], int len);

int main(){
    int arr[] = {1,-6,15,0,29};
    /*int arr[] = {-1,-6,-15,-10,-29,-7,-6, -101,-99,-82,-23322};*/
    int length = sizeof(arr) / sizeof(arr[0]);
    
    int max = maximal(arr, length);
    printf("%d\n", max);

    return 0;
}



int maximal(int arr[], int len){
    int i;
    int max = arr[0];
    
    /* sizeof(arr) == sizeof(int *) */
    
    for (i = 1; i < len; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

