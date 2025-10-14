#include<stdio.h>
int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("print main diagonal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i][i]);
    }
    printf("\n");
    // print first diadonal
    printf("second diagonal: ");
    for (int i = 0; i < n; i++)
    {
         printf("%d",a[i][n-1-i]);
    }
    printf("\n");
    return 0;
    
}