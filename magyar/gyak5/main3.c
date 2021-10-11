#include <stdio.h>


int main() {
	int ertek = 1;

	int* pointer = &ertek;

	int** pointer_pointer = &pointer;
	
	printf("%d\n", ertek);

	**pointer_pointer = 2;
			
	printf("%d\n", ertek);

	return 0;
}
