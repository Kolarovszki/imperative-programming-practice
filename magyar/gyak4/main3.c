#include <stdio.h>

#define LENGTH 6

void print_array(int arr[]) {
	int i;
	for (i = 0; i < LENGTH; ++i) {
		printf("%d\n", arr[i]);
	}
}


int main() {
	int arr[LENGTH] = {0};

	print_array(arr);

	return 0;
}
