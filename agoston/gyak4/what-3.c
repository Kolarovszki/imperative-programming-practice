#include<stdio.h>
int main()
{
    int a, b, c;	
    int arr[5] = {1, 2, 3, 25, 7};
    a = ++arr[1];
    b = arr[1]++;
    c = arr[a++];
    printf("%d : %d :%d", a, b, c);
    return 0;
}