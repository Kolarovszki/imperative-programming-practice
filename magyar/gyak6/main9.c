#include <stdio.h>
#include <string.h>


void log_(int code, char* string) {
	char loglevel[8];

	switch(code) {
		case 0:
			strcpy(loglevel, "INFO");
			break;

		default:
			strcpy(loglevel, "LOG");
			break;
	}

	printf("%s - %s\n", loglevel, string);
}


int main() {
	log_(-1, "nem tudom");  // WARNING - nem tudom

	return 0;
}
