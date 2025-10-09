#include <stdio.h>
int main() 
{
    int n=3;
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("3x3 Matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Main diagonal: ");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", A[i][i]);
    }
    printf("\n");

    printf("Secondary diagonal: ");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", A[i][n -1 - i]);  //2-i
    }
    printf("\n");

    return 0;
}
