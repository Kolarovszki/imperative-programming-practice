#include<stdio.h>

int main()
{
    	int arr2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int temp = (arr2 + 1)[2];
	printf("%d\n", temp);
   
	printf("arr2: %p\n", arr2);
	printf("arr2 + 1: %p\n", arr2 + 1);

    	return 0;
}
