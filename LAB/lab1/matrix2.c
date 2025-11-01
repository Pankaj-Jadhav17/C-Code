#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter (n*n) matrix: ");
    scanf("%d",&n);
   
    int matrixA[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; i++)
        {
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("\n");

    int matrixB[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&matrixB[i][j]);
        }
    }
    printf("\n");
    
    
    int matrixC[i][j];
    printf("addition of whole matrix: ");
     for ( i = 0; i < n; i++ ){
        for ( i = 0; i < n; i++){
           matrixC[i][j]= matrixA[i][j]+matrixB[i][j];
        }
    }
    printf("\n");
    
}





