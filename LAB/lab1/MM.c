#include <stdio.h>

int main() {
    int i, j, k;
    int n, m, p;

    // Input for first matrix size
    printf("Enter the size of the first matrix (n m): ");
    scanf("%d %d", &n, &m);

    int matrixA[n][m];
    printf("Enter the first matrix (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input for second matrix size
    printf("Enter the number of columns for the second matrix (p): ");
    scanf("%d", &p);

    int matrixB[m][p];
    printf("Enter the second matrix (%d x %d):\n", m, p);
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int matrixC[n][p];

    // Initialize matrixC to 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            matrixC[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < m; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Output result
    printf("\nResultant matrix (A x B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
