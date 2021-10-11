#include <stdio.h>

int* func() {
	int szam = 1;

	return &szam;
}


int main() {
	int* szam_pointer = func();

	printf("%d\n", *szam_pointer);

	return 0;
}
