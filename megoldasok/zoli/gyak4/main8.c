#include <stdio.h>
#include <assert.h>


#define LENGTH 5


int weighted_sum(int array[], int weights[]) {
	int accumulator = 0;

	int i;
	for (i = 0; i < LENGTH; ++i) {
		accumulator += weights[i] * array[i];
	}

	return accumulator;
}


int main() {
	int array[LENGTH] = {1, 2, 3, 4, 5};
	int weights[LENGTH] = {1, 1, 2, 3, 5};
	
	printf(
		"WEIGHTED_SUM: %d\n",
		weighted_sum(array, weights)
	);
	
	return 0;
}
