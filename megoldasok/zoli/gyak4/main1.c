#include <stdio.h>

int func(int szam) {
	return -1 * szam;
}


int main() {
	unsigned int szam = 5;
	printf("Negativ: %d\n", func(szam));

	return 0;
}
