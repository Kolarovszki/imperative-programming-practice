#include <stdio.h>

#define BUFSIZE 255


int main() {
	char str[BUFSIZE];
	FILE *fp = fopen("szoveg.txt", "r");

	while (fscanf(fp, "%s", str) == 1) {
		printf("%s\n", str);
	}
	
	return 0;
}
