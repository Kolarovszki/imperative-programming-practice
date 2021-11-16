#include <stdio.h>


int main() {
	char str[255];
	FILE *fp = fopen("player.txt", "w");
	
	printf("Jatekos neve: ");
	scanf("%s", str);

	fprintf(fp, "%s", str);

	fclose(fp);
	return 0;
}
