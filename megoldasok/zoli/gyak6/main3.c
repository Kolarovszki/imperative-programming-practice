#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b) {
	return a * b;
}


int main(int argc, char* argv[]) {
	if (argc != 3) {
		printf("Invalid input!");
		return 1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("a*b = %d\n", multiply(a, b));	
	
	return 0;
}
