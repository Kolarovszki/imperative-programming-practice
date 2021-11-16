#include<stdio.h>

int main() {

    int arr1[3][4] = {  
       {0, 1, 2, 3} ,   /*  row indexed by 0 */
       {4, 5, 6, 7} ,   /*  row indexed by 1 */
       {8, 9, 10, 11}   /*  row indexed by 2 */
    };

    int arr2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    /* means the same as arr1 */
    
    printf("%d", arr2[1][3]);
    
    return 0;
}