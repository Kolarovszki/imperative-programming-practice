#ifndef VECTOR_H
#define VECTOR_H

#define DIM 5

int scalar(int v1[DIM], int v2[DIM]);

int calculation(int vector[DIM], int init, int (*f)(int, int));

int sum(int a, int b);
int prod(int a, int b);

#endif
