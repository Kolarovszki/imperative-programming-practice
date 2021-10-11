#include <stdio.h>

double atlag(int* eleje, int length)
{
	int i;
	int akkumulator = 0;

	for (i = 0; i < length; i++) {
		akkumulator += *(eleje + i);
	}

	return (double) akkumulator / length;
}


int main()
{
	int tomb[] = {1, 2, 3};

	printf("atlag(tomb, 3)=%f\n", atlag(tomb, 3));

	return 0;
}
