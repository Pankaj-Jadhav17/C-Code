#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the dimension n of the n x n matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Accept the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of elements in the 0th row
    int sum_row0 = 0;
    for (j = 0; j < n; j++) {
        sum_row0 += matrix[0][j];
    }
    printf("Sum of elements in 0th row = %d\n", sum_row0);

    // Multiplication of elements in the 1st column
    int mul_col1 = 1;
    for (i = 0; i < n; i++) {
        mul_col1 *= matrix[i][1];
    }
    printf("Multiplication of elements in 1st column = %d\n", mul_col1);

    // Sum of elements in the anti-diagonal
    int sum_antidiag = 0;
    for (i = 0; i < n; i++) {
        sum_antidiag += matrix[i][n - 1 - i];
    }
    printf("Sum of elements in anti-diagonal = %d\n", sum_antidiag);

    // Sum of all elements in the matrix
    int total_sum = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            total_sum += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix = %d\n", total_sum);

    return 0;
}
