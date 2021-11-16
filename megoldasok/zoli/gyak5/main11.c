#include <stdio.h>

int tombcmp(int* a, int* b)
{
	if (a < b)
		return -1;
	else if (a > b)
		return 1;
	else
		return 0;
}


int main() {

	int tomb[] = {1, 2, 3};

	printf("%d\n", tombcmp(tomb + 2, tomb + 1));

	return 0;
}
