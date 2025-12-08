#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("Enter the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    int i, j, k;
    // Initialize result matrix C to 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    // Multiply A × B = C
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n, m, p;

    // Size of first matrix
    printf("Enter size of first matrix (n m): ");
    scanf("%d %d", &n, &m);

    int A[n][m];
    inputMatrix(n, m, A);

    // Size of second matrix
    printf("Enter number of columns for second matrix (p): ");
    scanf("%d", &p);

    int B[m][p];
    inputMatrix(m, p, B);

    int C[n][p];

    // Multiply matrices
    multiplyMatrix(n, m, p, A, B, C);

    // Output result
    printf("\nResultant matrix (A x B):\n");
    printMatrix(n, p, C);

    return 0;
}
