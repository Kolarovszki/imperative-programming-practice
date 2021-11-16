#include <stdio.h>

#define LENGTH 8


int main() {
	int tomb[LENGTH] = {1, 2, 3, 5, 6, 7, 8, 10};

	FILE *fp = fopen("even_numbers.txt", "a");
	
	int i;
	for (i = 0; i < LENGTH; i++) {
		if (tomb[i] % 2 == 0)
			fprintf(fp, "%d\n", tomb[i]);
	}

	fclose(fp);
	return 0;
}
