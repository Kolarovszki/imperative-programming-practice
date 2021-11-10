#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *j = (int*)malloc(4 * sizeof(int));
	*j = 9;
	free(j);
	printf("%d", *j);
	return 0;
}