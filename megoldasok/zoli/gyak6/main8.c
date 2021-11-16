#include <stdio.h>


int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("No filename specified!\n");
		return 1;
	}

	int accumulator = 0;
	int number_which_is_read;

	FILE *fp = fopen(argv[1], "r");
	
	while (fscanf(fp, "%d", &number_which_is_read) == 1) {
		accumulator += number_which_is_read; 
	}

	printf("%d\n", accumulator);	

	fclose(fp);
	return 0;
}
