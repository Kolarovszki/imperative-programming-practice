#include<stdio.h>
int main(void)
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    printf("%d - %d\n", arr, arr+1);
    
    printf("%p - %p", arr, arr+1);
    
    return 0;
}
