#include <stdio.h>


void change(int* szam_pointer) {
	*szam_pointer = 2;
}


int main() {
	int szam = 1;
	printf("%d\n", szam);

	change(&szam);
	
	printf("%d\n", szam);

	return 0;
}
