#include <stdio.h>

void cserel(int* tomb) {
	int temp = *(tomb + 1);  // Hasonlít a * operátorra

	tomb[1] = *tomb;

	tomb[0] = temp;
}


int main() {
	int tomb[] = {1, 2};

	printf("tomb[0]=%d, tomb[1]=%d\n", tomb[0], tomb[1]);
	
	cserel(tomb);

	printf("tomb[0]=%d, tomb[1]=%d\n", tomb[0], tomb[1]);

	return 0;
}
