/* Write a program to:

   Accept a matrix from user.
   Accept an integer value.
   Multiply the matrix with the integer value and print the matrix.*/
#include <stdio.h>

int main() {
    int n,multiplier;

    // Input number of rows and columns
    printf("Enter a (n*n) matrix: ");
    scanf("%d",&n);

    int matrix[n][n];
    int result[n][n];

    // Input matrix elements
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input multiplier
    printf("\nEnter the integer to multiply the matrix by: ");
    scanf("%d", &multiplier);

    // Multiply matrix by integer
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix[i][j] * multiplier;
        }
    }

    // Display the result
    printf("\nResultant matrix after multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
