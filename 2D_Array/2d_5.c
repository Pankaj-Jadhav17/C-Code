//print the diagonal elements.
#include<stdio.h>
int main()
{
    //user input
    int n=3;
    int a[3][3];
    printf("Enter the number of 3*3 matrix: \n");
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
          printf("number %d %d",i,j);
          scanf("%d",&a[i][j]);
      }
   }
   
//print matrix
    printf("print a matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    //print first diadonal
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