#include <stdio.h>

#define DIM 2


double scalar_product(double* a, double* b, int dim) {
    double sum = 0.0;
    int i;

    for (i = 0; i < dim; ++i) {
        sum += a[i] * b[i];
    }

    return sum;
}


void print_matrix(double a[][DIM]) {
    int i, j;

    for (i = 0; i < DIM; ++i) { // GOES OVER ROWS
        for (j = 0; j < DIM; ++j) {  // GOES OVER COLUMNS
            printf(" %f ", a[i][j]);
        }
        printf("\n");
    }

}

void extract_row(int index, double matrix[][DIM], double row[]) {
    int k;
    for (k = 0; k < DIM; ++k) {  // EXTRACT i-th row of 'a' 
        row[k] = matrix[index][k];
    }
}


void extract_column(int index, double matrix[][DIM], double column[]) {
    int k;
    for (k = 0; k < DIM; ++k) {
        column[k] = matrix[k][index];
    }
}


void matrix_product(double a[][DIM], double b[][DIM], double product[][DIM]) {
    int i, j;

    double row[DIM];
    double column[DIM];
    
    for (i = 0; i < DIM; ++i) { // ROWS
        for (j = 0; j < DIM; ++j) {  // COLUMNS
            extract_row(i, a, row);   
            extract_column(j, b, column);

            product[i][j] = scalar_product(row, column, DIM);   
        }
    }
}


int main() {
    double matrix1[DIM][DIM] = {
        {1.0, 2.0},
        {3.0, 4.0},
    };
    double matrix2[DIM][DIM] = {
        {1.0, 0.0},
        {0.0, 1.0},
    };
    
    double product[DIM][DIM];

    matrix_product(matrix1, matrix2, product);
    
    print_matrix(product);

    return 0;
}
