#include <stdio.h>
#include <assert.h>


#define LENGTH 5


double weighted_mean(int array[], int weights[]) {
	int accumulator = 0;

	int i;
	for (i = 0; i < LENGTH; ++i) {
		accumulator += weights[i] * array[i];
	}

	return (double) accumulator / LENGTH;
}


int main() {
	int array[LENGTH] = {1, 2, 3, 4, 5};
	int weights[LENGTH] = {1, 1, 2, 3, 5};
	
	printf(
		"WEIGHTED_MEAN: %f\n",
		weighted_mean(array, weights)
	);
	
	return 0;
}
