#include <stdio.h>
#include <assert.h>


#define LENGTH 6

void print_array(int arr[]) {
	int i;
	for (i = 0; i < LENGTH; ++i) {
		printf("%d\n", arr[i]);
	}
}


int sum(int arr[]) {
	int accumulator = 0;

	int i;
	for (i = 0; i < LENGTH; ++i) {
		accumulator += arr[i];
	}

	return accumulator;
}


int main() {
	int arr[LENGTH] = {0};

	assert(sum(arr) == 0);  // SIDE NOTE

	printf("SUM: %d\n", sum(arr));

	int arr2[LENGTH] = {1, 3, 4, 1, 3, 7};

	assert(sum(arr2) == 19);  // SIDE NOTE
	
	printf("SUM: %d\n", sum(arr2));  // assert 19
	
	return 0;
}
