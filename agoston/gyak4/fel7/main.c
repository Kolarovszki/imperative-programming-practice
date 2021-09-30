#include <stdio.h>


int maximal2(int arr[], int len);

int main(){
    int arr[] = {1,-6,15,0,29,29};
    /*int arr[] = {-1,-6,-15,-10,-29,-7,-6, -101,-99,-82,-23322};*/
    int length = sizeof(arr) / sizeof(arr[0]);
    int max = maximal2(arr, length);
    printf("%d\n", max);

    return 0;
}



int maximal2(int arr[], int hossz){
    int i;
    int max1 = arr[0] > arr[1] ? arr[0] : arr[1];
    int max2 = arr[0] > arr[1] ? arr[1] : arr[0];; 
    
    /* sizeof(arr) == sizeof(int *) */
    
    for (i = 2; i < hossz; i++){
        if (arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }else if (arr[i] > max2){
            max2 = arr[i];
        }
    }
    return max2;
}

