#include <stdio.h>


int main(int argc, char* argv[]) {
	printf("argc: %d\n", argc);  // argc >= 1

	printf("argv[0]: %s\n", argv[0]);  // futtatható állomány fájlneve 
	printf("argv[1]: %s\n", argv[1]);  // első paraméter
	return 0;
}
