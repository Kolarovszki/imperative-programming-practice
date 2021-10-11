#include <stdio.h>


void cserel(int* a_ptr, int* b_ptr) {
	int a_temp = *a_ptr;

	*a_ptr = *b_ptr;

	*b_ptr = a_temp;
}


int main() {
	int a = 1;
	int b = 2;

	printf("a=%d, b=%d\n", a, b);

	cserel(&a, &b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
