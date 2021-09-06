#include <stdio.h>


double scalar_product(double* a, double* b, int dim) {
    double sum = 0.0;
    int i;

    for (i = 0; i < dim; ++i) {
        sum += a[i] * b[i];
    }

    return sum;
}


int main() {
    double vector1[] = {1.0, 2.0, 3.0};
    double vector2[] = {6.0, 4.0, 3.0};

    // 1.0 * 6.0 + 2.0 * 4.0 + 3.0 * 3.0
    
    printf(
        "Scalar product: %f\n",
        scalar_product(vector1, vector2, 3)
    );

    return 0;
}
