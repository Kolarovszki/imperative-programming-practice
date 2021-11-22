#ifndef LINALG_H
#define LINALG_H

double scalar_product(double* vector1, double* vector2, int length);

double reduce(
    double *array,
    int length,
    double accumulator,
    double (*f)(double, double)
);

double add(double a, double b);

double multiply(double a, double b);

#endif
