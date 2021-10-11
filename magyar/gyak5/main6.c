#include <stdio.h>

int sum(int* eleje, int* vege)
{
	int i;
	int akkumulator = 0;

	int length = vege - eleje + 1;

	for (i = 0; i < length; i++) {
//		akkumulator += eleje[i];
		akkumulator += *(eleje + i);
	}

	return akkumulator;
}


int main()
{
	int tomb[] = {1, 2, 3};

	printf("sum(tomb, tomb + 2)=%d\n", sum(tomb, tomb + 2));

	return 0;
}
