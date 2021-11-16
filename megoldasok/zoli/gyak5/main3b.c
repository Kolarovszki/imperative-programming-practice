#include <stdio.h>


int main() {
	int ertek = 1;

	int* pointer = &ertek;

	int** pointer_pointer = &pointer;
	
	printf("%d\n", ertek);

	int ertek2 = 2;

	int* pointer2 = &ertek2;

	*pointer_pointer = pointer2;
			
	printf("%d\n", **pointer_pointer);

	return 0;
}
