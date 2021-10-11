#include <stdio.h>

char* func() {
	char karakter = 'c';

	return &karakter;
}


int main() {
	char* karakter_pointer = func();

	printf("%p\n", karakter_pointer);

	return 0;
}
