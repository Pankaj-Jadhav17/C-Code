#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the dimension n of the n x n matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Accept the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of elements in the 0th row
    int sum_row0 = 0;
    for (j = 0; j < n; j++) 
    {
        sum_row0 += matrix[0][j];
    }
    printf("Sum of elements in 0th row = %d\n", sum_row0);

    // Multiplication of elements in the 1st column
    int mul_col1 = 1;
    for (i = 0; i < n; i++) 
    {
        mul_col1 *= matrix[i][1];
    }
    printf("Multiplication of elements in 1st column = %d\n", mul_col1);

    // Sum of elements in the anti-diagonal
    int sum_antidiag = 0;
    for (i = 0; i < n; i++) 
    {
        sum_antidiag += matrix[i][n - 1 - i];
    }
    printf("Sum of elements in anti-diagonal = %d\n", sum_antidiag);

    // Sum of all elements in the matrix
    int total_sum = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            total_sum += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix = %d\n", total_sum);

    //min element of diagonal 
    int min = matrix[i][j];
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j]<min)
            min = matrix[i][j];
        }
    }
    printf("Minimum element of the diadonal = %d\n",min);

      //max element of diagonal 
    int max = matrix[i][j];
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j]>max)
            max = matrix[i][j];
        }
    }
    printf("Maximum element of the diadonal = %d\n",max);

    int d_max = matrix[0][0];
    for ( i = 0; i < n; i++)
    {
        if (matrix[i][i] > d_max)
          d_max = matrix[i][i];
    }
    printf("maximum element of the diagonal elements = %d\n",d_max);

     int ad_max = matrix[0][n - 1]; 

    for (int i = 0; i < n; i++) 
    {
        int j = n - 1 - i; 
        if (matrix[i][j] > ad_max) 
        {
            ad_max = matrix[i][j];
        }
    }

    printf("Maximum among anti-diagonal elements = %d\n", max);
    return 0;
}
