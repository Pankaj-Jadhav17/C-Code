#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter dimension n of the n*n matrix: ");
    scanf("%d",&n);
    int matrix[n][n];
    printf("enter the element of the %d*%d matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&matrix);
        }
    }
    int largest = matrix[0][0];
    int smallest = matrix[0][0];
    int largest_diag = matrix[0][0];

    for(i=0;i<n;i++)
    {
        for (j = 0; j < n; j++)
        {
            if(matrix[i][j]>largest)
            largest = matrix[i][j];
            if(matrix[i][j]<smallest)
            smallest = matrix[i][j];
        }
        if (matrix[i][j])
            largest_diag = matrix[i][j];
    }
    printf("Largest element in the matrix: %d\n",largest);
    printf("Smallest element in the matrix: %d\n",smallest);
    printf("Largest element of the diagonal matrix: %d\n",largest_diag);
    return 0;
}