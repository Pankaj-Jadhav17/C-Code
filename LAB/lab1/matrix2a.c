#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n*n matrix: ");
    scanf("%d",&n);

     int matrixA[n][n];
     int matrixB[n][n];
     int sum[n][n];

     printf("Enter a Matrix:\n ");
     for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&matrixA[i][j]);
        }
     }
     
     printf("Enter a second matrix:\n ");
     for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&matrixB[i][j]);
        }
     }
    

     for ( i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            sum[i][j] = matrixA[i][j]+matrixB[i][j];
        }
     }
    

     printf("sum of two matrix: ");
     for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++)  {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
     }
}