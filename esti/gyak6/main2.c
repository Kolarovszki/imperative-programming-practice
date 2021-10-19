#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int i;
	FILE* fp = fopen("even_numbers.txt", "a");

	if (fp == NULL) {
		return 1;
	}

	for (i = 1; i < argc; i++) {
		if (atoi(argv[i]) % 2 == 0)
			fprintf(fp, "%s\n", argv[i]); 
	}

	fclose(fp);
	return 0;
}
