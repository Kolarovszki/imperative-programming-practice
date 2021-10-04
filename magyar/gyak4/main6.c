#include <stdio.h>
#include <assert.h>


#define LENGTH 6

int max(int array[]) {
	int maximum;

	maximum = array[0];

	int i;
	for (i = 0; i < LENGTH; ++i) {
		if (array[i] > maximum)
			maximum = array[i];
	}

	return maximum;
}



int main() {
	int array[LENGTH] = {1, 3, 4, 1, 3, 7};
	
	printf("MAX: %d\n", max(array));

	assert(max(array) == 7);	
	
	return 0;
}
