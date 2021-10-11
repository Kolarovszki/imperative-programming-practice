#include <stdio.h>

/**
 * -1: left < right
 *  0: ==
 *  1: >
 */
int compare(char left[], char right[]) {
	int index = 0;
	while (1) {
		if (
			left[index] == '\0'
			&& right[index] == '\0'
		)
			return 0;
		
		if (left[index] == '\0')
			return -1;

		if (right[index] == '\0')
			return 1;

		if (left[index] < right[index])
			return -1;
		
		if (left[index] > right[index])
			return 1;

		index++;
	}
}


int main() {
	char left[] = "abc";
	char right[] = "abcd";
	
	printf("%d\n", compare(left, right));

	return 0;
}
