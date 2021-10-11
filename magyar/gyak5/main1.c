#include <stdio.h>


int main() {
	char karakter = 'c';

	char* karakter_pointer = &karakter;

	printf("Karakter: %c\n", karakter);

	*karakter_pointer = 'd';

	printf("Karakter: %c\n", karakter);

	return 0;
}
