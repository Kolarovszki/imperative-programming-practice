#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 10;
	free(ptr);
	ptr = 9;
	printf("%d", ptr);
}