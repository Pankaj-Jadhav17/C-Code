#include <stdio.h>

int main() {
    int n;

    // Input number of rows and columns
    printf("Enter a (n*n): matrix: ");
    scanf("%d", &n);

    int matrix1[n][n], matrix2[n][n];
    int sum[n][n], diff[n][n];

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform addition and subtraction
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Display results
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nDifference of the two matrices (Matrix1 - Matrix2):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}






