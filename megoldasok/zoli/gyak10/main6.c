#include <stdio.h>
#include <stdlib.h>

#include "linalg.h"


int main() {
    int length = 3;

    double* vector1 = malloc(length * sizeof(double));
    double* vector2 = malloc(length * sizeof(double));

    if (vector1 == NULL || vector2 == NULL) {
        perror("Nincs elég memória!");
        exit(1);
    }

    vector1[0] = 1.0;
    vector1[1] = 2.0;
    vector1[2] = 3.0;

    vector2[0] = 1.0;
    vector2[1] = 2.0;
    vector2[2] = 3.0;

    double result = scalar_product(vector1, vector2, 3);

    printf("Result: %f\n", result);

    free(vector1);
    free(vector2);

    return 0;
}
