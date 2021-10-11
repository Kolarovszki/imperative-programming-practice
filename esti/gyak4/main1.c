#include <stdio.h>

#define LENGTH 3

int sum(int array[], int length) {
	int accumulator = 0;

	int i;
	for (i = 0; i < length; i++)
		accumulator += array[i];

	return accumulator;
}


int main() {
	int array[LENGTH] = {1, 2, 3};

	printf("Sum: %d\n", sum(array, LENGTH));

	return 0;
}
