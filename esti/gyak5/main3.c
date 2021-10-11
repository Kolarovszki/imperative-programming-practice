#include <stdio.h>


int main() {
	int ertek = 1;

	int* pointer = &ertek;

	int** pointer2 = &pointer;

	**pointer2 = 2;

	// Ua: *pointer = 2
	// ugyanis **pointer2 == **&pointer == *pointer

	printf("%d\n", ertek);

	return 0;
}
