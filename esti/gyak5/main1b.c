#include <stdio.h>


int main() {
	int szam = 1;

	int* szam_pointer = &szam;

	printf("%d\n", szam);

	*szam_pointer = 2;
	
	printf("%d\n", szam);

	// Ua. mintha `szam = 2;`

	return 0;
}
