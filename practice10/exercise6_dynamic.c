#include <stdio.h>
#include <stdlib.h>


double** malloc_matrix(int row_dim, int column_dim) {
    int i;

    double** matrix = malloc(row_dim * sizeof(double*));

    for (i = 0; i < row_dim; ++i) {
        matrix[i] = malloc(column_dim * sizeof(double));
    }

    return matrix;
}


void free_matrix(double** matrix, int row_dim) {
    int i;

    for (i = 0; i < row_dim; ++i) {
        free(matrix[i]);
    }

    free(matrix);
}


double scalar_product(double* a, double* b, int dim) {
    double sum = 0.0;
    int i;

    for (i = 0; i < dim; ++i) {
        sum += a[i] * b[i];
    }

    return sum;
}


void print_matrix(double** a, int row_dim, int column_dim) {
    int i, j;

    for (i = 0; i < row_dim; ++i) { // GOES OVER ROWS
        for (j = 0; j < column_dim; ++j) {  // GOES OVER COLUMNS
            printf(" %f ", a[i][j]);
        }
        printf("\n");
    }

}

double* extract_row(int index, double** matrix, int size) {
    int k;
    double* row = malloc(size * sizeof(double));
    
    for (k = 0; k < size; ++k) {  // EXTRACT i-th row of 'a' 
        row[k] = matrix[index][k];
    }

    return row;
}


double* extract_column(int index, double** matrix, int size) {
    int k;
    double* column = malloc(size * sizeof(double));

    for (k = 0; k < size; ++k) {
        column[k] = matrix[k][index];
    }
    return column;
}


double** matrix_product(
    double** a, double** b,
    int row_dim, int column_dim
) {
    int i, j;

    double** product = malloc_matrix(row_dim, column_dim);

    double *row;
    double *column;
    
    for (i = 0; i < row_dim; ++i) { // ROWS
        for (j = 0; j < column_dim; ++j) {  // COLUMNS
            row = extract_row(i, a, row_dim);   
            column = extract_column(j, b, column_dim);

            product[i][j] = scalar_product(row, column, column_dim);   

            free(row);
            free(column);
        }
    }

    return product;
}



int main() {
    int row_dim = 2;
    int column_dim = 2;

    double** matrix1 = malloc_matrix(row_dim, column_dim);
    double** matrix2 = malloc_matrix(row_dim, column_dim);

    matrix1[0][0] = 1.0;
    matrix1[0][1] = 2.0;
    matrix1[1][0] = 3.0;
    matrix1[1][1] = 4.0;
 
    matrix2[0][0] = 1.0;
    matrix2[0][1] = 2.0;
    matrix2[1][0] = 3.0;
    matrix2[1][1] = 4.0;
    
    double** product = matrix_product(matrix1, matrix2, row_dim, column_dim);
    
    print_matrix(product, row_dim, column_dim);

    free_matrix(matrix1, row_dim);
    free_matrix(matrix2, row_dim);

    free_matrix(product, row_dim);

    return 0;
}
