#include "linalg.h"

double scalar_product(double* vector1, double* vector2, int length) {
    double accumulator = 0.0;

    int i;
    for (i = 0; i <= length - 1; i++) {
        accumulator += vector1[i] * vector2[i];
    }

    return accumulator;
}


double reduce(
    double *array,
    int length,
    double accumulator,
    double (*f)(double, double)
) {
    int i;
    for (i = 0; i < length; i++) {
        accumulator = f(accumulator, array[i]);
    }
    
    return accumulator;
}


double add(double a, double b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}
