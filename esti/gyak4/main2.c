#include <stdio.h>

int get_length(char string[]) {
	int index = 0;

	while (string[index] != '\0') {
		index++;
	}

	return index;
}


int main() {
	char string[] = "karaktertomb";

	printf("Length: %d\n", get_length(string));
	
	return 0;
}
