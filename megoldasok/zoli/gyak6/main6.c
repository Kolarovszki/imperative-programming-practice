#include <stdio.h>

#define LENGTH 7


int main() {
	int tomb[LENGTH] = {1, 2, 3, 4, 5, 6, 7};

	FILE *fp = fopen("even_numbers.txt", "w");
	
	int i;
	for (i = 0; i < LENGTH; i++) {
		if (tomb[i] % 2 == 0)
			fprintf(fp, "%d\n", tomb[i]);
	}

	fclose(fp);
	return 0;
}
