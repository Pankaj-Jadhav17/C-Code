#include <stdio.h>
#include <stdlib.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    if (matrix == NULL || matrixSize == 0) return;

    int m = matrixSize;
    int n = matrixColSize[0];

    int *rows = (int*)calloc(m, sizeof(int));
    int *cols = (int*)calloc(n, sizeof(int));

    if (!rows || !cols) {
        free(rows);
        free(cols);
        return;
    }

    // Mark rows and columns that contain zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    // Set matrix cells to zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (rows[i] || cols[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    free(rows);
    free(cols);
}

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);

    int **matrix = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int *colSizes = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        colSizes[i] = n;
    }

    setZeroes(matrix, m, colSizes);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) free(matrix[i]);
    free(matrix);
    free(colSizes);

    return 0;
}
