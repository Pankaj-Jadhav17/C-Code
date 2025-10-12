#include <stdio.h>

int main() {
    float matrix[2][2], inverse[2][2];
    float determinant;
    int i,j;

    // Input matrix elements
    printf("Enter elements of 2x2 matrix (row-wise):\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calculate determinant
    determinant = matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];

    // Check if inverse exists
    if (determinant == 0) {
        printf("The matrix is not invertible (determinant is zero).\n");
        return 1;
    }

    // Calculate inverse
    inverse[0][0] = matrix[1][1] / determinant;
    inverse[0][1] = -matrix[0][1] / determinant;
    inverse[1][0] = -matrix[1][0] / determinant;
    inverse[1][1] = matrix[0][0] / determinant;

    // Print inverse
    printf("Inverse of the matrix:\n");
    for (i = 0; i < 2; i++)
     {
        for (j = 0; j < 2; j++) 
        {
            printf("%f\t", inverse[i][j]);
        }
        printf("\n");
    }
    return 0;
}
