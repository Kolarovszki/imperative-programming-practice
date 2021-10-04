#include<stdio.h>

int main()
{
	char temp;
	char arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	temp = (arr + 1)[2];
	printf("%d\n", temp);
    
    int arr2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	temp = (arr2 + 1)[2];
	printf("%d\n", temp);
    
    return 0;
}