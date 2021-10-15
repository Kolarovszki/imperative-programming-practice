#include <stdio.h>




int main(void){
    int i = 100;
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int arr2[] = {10, 11, 12, 13, 14};
    int j = 200;
    
    int *p;
    int *p2;
    
    p = &arr[3] /*   = arr + 3   */;
    p2 = arr2;
    printf("p : %p\np2: %p\n", p, p2);
    

    for (int q = -12; q < 10; q++){
        printf("q: %d -> %d\n", q, *(p + q));
    }


    return 0;
}
