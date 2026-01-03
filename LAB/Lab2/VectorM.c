#include <stdio.h>

int main() {
    int n, m, p;
    int i, j;

    // Input vector size
    printf("Enter vector size (1 x m): ");
    scanf("%d", &m);
    int v[m];
    
    printf("Enter vector elements:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &v[i]);
    }

    // Input matrix size
    printf("Enter matrix size (m x p): ");
    scanf("%d%d", &m, &p);
    int matrix[m][p];
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Result will be a 1 x p vector
    int result[p];
    for (j = 0; j < p; j++) {
        result[j] = 0;
        for (i = 0; i < m; i++) {
            result[j] += v[i] * matrix[i][j];
        }
    }

    printf("\nResult (1 x %d vector):\n", p);
    for (j = 0; j < p; j++) {
        printf("%d ", result[j]);
    }
    printf("\n");

    return 0;
}
