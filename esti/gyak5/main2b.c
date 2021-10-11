#include <stdio.h>


void cserel(int* tomb) {
	int temp = *(tomb + 0);

	*(tomb + 0) = *(tomb + 1);

	*(tomb + 1) = temp;
}


int main() {
	int tomb[] = {1, 2};


	printf("tomb=%p, tomb+1=%p\n", tomb, tomb + 1);
	printf("0.=%d, 1.=%d\n", tomb[0], tomb[1]);


	cserel(tomb);

	printf("0.=%d, 1.=%d\n", tomb[0], tomb[1]);

	return 0;
}
