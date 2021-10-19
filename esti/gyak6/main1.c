#include <stdio.h>
#include <string.h>


int main() {
	char string[255];

	FILE *fp = fopen("stringek.txt", "r");

	while(fscanf(fp, "%s", string) == 1) {
		if (strlen(string) > 5)
 			printf("%s\n", string);
	}

	fclose(fp);

	return 0;
}
