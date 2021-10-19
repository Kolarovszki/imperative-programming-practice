#include <stdio.h>


int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("No filename specified!\n");
		return 1;
	}
	
	FILE* fp = fopen(argv[1], "r");
	
	if (fp == NULL) {
		printf("File could not be opened!\n");
		return 2;
	}

	int szam;
	int akkumulator = 0;

	while (fscanf(fp, "%d", &szam) == 1) {
		switch (szam) {
			case 42:
				printf("Meaning of life has been found!\n");
				break;
			case 0:
				printf("Should not be added!\n");
				break;
			default:
				akkumulator += szam;
				break;
		}
	}

	printf("Az összeg: %d\n", akkumulator);

	fclose(fp);
	return 0;
}
