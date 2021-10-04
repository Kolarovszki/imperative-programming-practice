#include<stdio.h>

int main() {

    int arr1[] = {1,2,3};
    
    int arr2[3] = {1,2,3};
    /* the same as arr1 */
    
    int arr3[2] = {1,2,3};
    /* too much element, yields warning */
    
    int arr4[3];
    arr4[0] = 1;
    arr4[1] = 2;
    arr4[2] = 3;
    /* same as arr1 and arr2 */
    
    int arr5[3];
    arr5[3] = 11;
    arr5[4] = 13;
    arr5[5] = 17;
    
    printf("%d\n", arr1[0]);
    printf("%d\n", arr3[2]);
    int j;
    for(j =0; j<=15; j++) {
        printf("%d, ", arr5[j]);
    }
        
    return 0;
}