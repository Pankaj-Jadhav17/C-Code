#include<stdio.h>
int main()
{
    int n=3;
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
     int row=0,col=0;
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
    return 0;
}





// #include <stdio.h>
// int main() {
//     int matrix[3][3] = { {1, 2, 3},
//                          {4, 5, 6},
//                          {7, 8, 9} };
//     for(int i = 0; i < 3; i++) 
//     {
//         for(int j = 0; j < 3; j++) 
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//  #include<stdio.h>
//  int main()
//  {
//     int n;
//     printf("enter the size of array");
//     scanf("%d",&n);
//     int a[10][10];
// printf("Enter a matrix elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     return 0;
//  }