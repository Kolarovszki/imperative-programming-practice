#include <stdio.h>
#include <assert.h>

/**
 * n! = (n) * (n-1)!
 * 0! = 1
 */
int factorial(int input) {
	if (input == 0)
		return 1;

	return input * factorial(input -1);
}


int main() {
	printf("%d\n", factorial(1));
	printf("%d\n", factorial(3));	
	printf("%d\n", factorial(4));

	assert(factorial(0) == 1);
	assert(factorial(1) == 1);
	assert(factorial(2) == 2);
	assert(factorial(3) == 6);
	assert(factorial(4) == 24);
	return 0;
}
