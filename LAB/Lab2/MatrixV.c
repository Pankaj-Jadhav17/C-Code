#include <stdio.h>
int main()
{
    int m, n;  // m = rows of matrix, n = columns of matrix (and size of vector)
    int i, j;

    // Input matrix size
    printf("Enter the size of the matrix (m x n): ");
    scanf("%d%d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input vector
    int vector[n];
    printf("Enter the elements of the vector (%d x 1):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    // Result vector (m x 1)
    int result[m];
    for (i = 0; i < m; i++) {
        result[i] = 0;
        for (j = 0; j < n; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }

    // Output the result
    printf("\nResult (m x 1) vector:\n");
    for (i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
