#include <stdio.h>
#define N 3  // Change this value for different matrix sizes

void printMatrix(float matrix[N][N], const char* name)
{
    printf("%s Matrix:\n", name);
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%8.4f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void luDecomposition(float A[N][N], float L[N][N], float U[N][N]) 
{
    for (int i = 0; i < N; i++) 
    {
        // Upper Triangular
        for (int k = i; k < N; k++) 
        {
            float sum = 0;
            for (int j = 0; j < i; j++) 
            {
                sum += (L[i][j] * U[j][k]);
            }
            U[i][k] = A[i][k] - sum;
        }

        // Lower Triangular
        for (int k = i; k < N; k++) 
        {
            if (i == k)
                L[i][i] = 1; // Diagonal as 1
            else 
            {
                float sum = 0;
                for (int j = 0; j < i; j++) {
                    sum += (L[k][j] * U[j][i]);
                }
                L[k][i] = (A[k][i] - sum) / U[i][i];
            }
        }
    }
}

int main() 
{
    float A[N][N] = { {2, -1, -2},
                      {-4, 6, 3},
                      {-4, -2, 8}
                    };

    float L[N][N] = {0};
    float U[N][N] = {0};

    luDecomposition(A, L, U);

    printMatrix(A, "Original (A)");
    printMatrix(L, "Lower (L)");
    printMatrix(U, "Upper (U)");

    return 0;
}