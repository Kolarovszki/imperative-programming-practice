#include <stdio.h>


int compare(char a[], char b[]) {
	int index = 0;

	while (1) {
		if (a[index] == '\0' && b[index] == '\0')
			return 0;

		if (a[index] == '\0')
			return -1;

		if (b[index] == '\0')
			return 1;

		if (a[index] < b[index])
			return -1;
		else if (a[index] > b[index])
			return 1;

		index++;
	}
}



int main() {
	char a[] = "abcd";
	char b[] = "abad";

	printf("OUTPUT: %d\n", compare(a, b));	

	return 0;
}
