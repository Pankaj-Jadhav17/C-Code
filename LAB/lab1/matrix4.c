 /*IV.Write a program to:

    1.Accept a n×n matrix from user
    2.Accept an array of size n from user
    3.Multiply the matrix and the array and print the result */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int a[n];
    int result[n];

    // Input matrix
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input array
    printf("Enter the elements of the array of size %d:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Multiply matrix and array
    for (int i = 0; i < n; i++) {
        result[i] = 0;
        for (int j = 0; j < n; j++) {
            result[i] += matrix[i][j] * a[j];
        }
    }

    // Output result
    printf("Resultant array after multiplication:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");
    return 0;
}
