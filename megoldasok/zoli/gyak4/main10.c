#include <stdio.h>


int get_length(char string[]) {
	int length = 0;

	char current_character = string[length];
	
	while (current_character != '\0') {
		length++;
		current_character = string[length];
	}

	return length;
}


int main() {
	char string[] = "random string";

	printf("LENGTH: %d\n", get_length(string));

	return 0;
}
