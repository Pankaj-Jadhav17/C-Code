// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     int n,m,p;

//     int A[n][m];
//     printf("Enter a first (4*4) matrix:\n");
//     for ( i = 0; i < n; i++){
//         for (j = 0; j < m; j++){
//             printf("A[%d][%d]= ",i,j);
//             scanf("%d",&A[i][j]);
//         }
//     }

//     int B[m][p];
//     printf("Enter a second (4*4) matrix:\n");
//     for ( i = 0; i < m; i++){
//         for ( j = 0; j < p; j++){
//             printf("A[%d][%d]= ",i,j);
//             scanf("%d",&B[i][j]);
//         }
//     }

//     int C[i][j];
//     for ( i = 0; i < n; i++){
//         for ( j = 0; j < p; j++){
//             C[i][j]=0;
//         }
//     }

//     for ( i = 0; i < n; i++)
//     {
//         for(j=0;j<p;j++){
//             for(k=0;k<m;k++){
//                 C[i][j] += A[i][k]*B[k][j];
//             }
//         }
//     }
    
//     printf("Resultant matrix is: \n");
//     for ( i = 0; i < n; i++){
//         for(j=0;j<n;j++){
//             printf("%d\n",C[i][j]);
//         }
//     }
//     return 0;
// }




#include <stdio.h>

int main()
{
    int i, j, k;

    int n = 4, m = 4, p = 4;  // Dimensions of 4×4 matrices

    int A[4][4];
    int B[4][4];
    int C[4][4];

    printf("Enter first 4x4 matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter second 4x4 matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("Resultant matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
