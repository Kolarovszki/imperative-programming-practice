#ifndef REVERSE_H
#define REVERSE_H

void write(char **lines, int size);
void print_reversed(char* line);
char** read(FILE* fp, char** lines, int* lSize);
void reverse(FILE* fp);

#endif
