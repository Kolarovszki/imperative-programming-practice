#include <stdio.h>

int sum(int* tomb, int length)
{
	int i;
	int akkumulator = 0;

	for (i = 0; i < length; i++) {
//		akkumulator += tomb[i];
		akkumulator += *(tomb + i);
	}

	return akkumulator;
}


int main()
{
	int tomb[] = {1, 2, 3};

	printf("sum(tomb, 3)=%d\n", sum(tomb, 3));

	return 0;
}
