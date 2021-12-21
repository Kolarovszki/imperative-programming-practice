#include <stdio.h>

int main(){
	FILE *fp = fopen("teszt2.txt", "w");

	fprintf(fp, "valami\nmasvalami\nvalami");
}
