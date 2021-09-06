#include <stdio.h>
#include <stdlib.h>


double accumulate(
    double* vector,
    int size,
    double accumulator,
    double (*func)(double, double)
) {
    int i;

    for (i = 0; i < size; ++i) {
        accumulator = func(accumulator, vector[i]);
    }
    return accumulator;
}

double add(double a, double b) {
    return a + b;
}


double product(double a, double b) {
    return a * b;
}


int main() {

    int size = 4;
    
    double* vector = malloc(size * sizeof(double));

    vector[0] = 1.0;
    vector[1] = 4.0;
    vector[2] = 19.0;
    vector[3] = 42.0;

    printf(
        "Sum: %f\n",
        accumulate(
            vector,
            size,
            /* accumulator = */ 0.0,
            /* func = */ add
        )
    );

    printf(
        "Product: %f\n",
        accumulate(
            vector,
            size,
            /* accumulator = */ 1.0,
            /* func = */ product
        )
    );

    free(vector);

    return 0;
}
