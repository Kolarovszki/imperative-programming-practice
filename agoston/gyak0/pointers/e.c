#include <stdio.h>

int main(void){
    int arr[3][4] = {
        {2, 3, 4, 5},
        {6, 7, 8, 9},
        {10,11,12,13}
    };
    
    int *p;
    int (*pp)[4];
    pp = arr;
    arr + 1;
    
    
    arr[2][3]; /*  {10,11,12,13} */   
    *(*(arr + 2) + 3);
    
    //arr[k] < === > *(arr + k)
    /*
    arr[2] == *(arr + 2)
    arr[2][3]
    *(arr + 2) [3]   nevezzük el "*(arr + 2)"-t "balta"-nak:
    balta      [3]
    *(balta + 3)
    *(*(arr + 2) + 3)
    
    */
    
    p = (int *)arr;
    for (int i = 0; i < 12; i++){
        printf("p[%d]: %d\n", i, p[i]);
    }

    return 0;
}
