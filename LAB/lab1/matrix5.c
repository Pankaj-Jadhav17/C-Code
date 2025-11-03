#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a n*n matrix: ");
    scanf("%d",&n);

    int matrixA[n][n];
    int matrixB[n][n];
    int result[n][n];

    printf("Enter a first matrix:\n");
    for ( i = 0; i < n; i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("\n");

    printf("Enter second matrix:\n");
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&matrixB[i][j]);
        }
    }
    printf("\n");

    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
             result[i][j]=0;
             for (int k = 0; k < n; k++)
             {
                result[i][j] = matrixA[i][j]*matrixB[i][j];
             }             
        }
    }
    printf("\n");

    printf("multiplication of two matrices:\n");
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
