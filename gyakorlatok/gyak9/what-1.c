#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *j = (int*)malloc(4 * sizeof(int));
	*j = 9;
	printf("%d", *j);
	/* initially the free was before the printf, but it was moved */
        free(j);
	return 0;
}
