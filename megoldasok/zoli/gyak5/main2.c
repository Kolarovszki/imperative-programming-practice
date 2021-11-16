#include <stdio.h>

void cserel(int* a_cim, int* b_cim) {
	int temp = *b_cim;

	*b_cim = *a_cim;

	*a_cim = temp;
}

int main() {
	int a = 1;
	int b = 2;

	printf("a=%d, b=%d\n", a, b);
	
	cserel(&a, &b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
