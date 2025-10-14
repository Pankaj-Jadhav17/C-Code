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
     int x;
     scanf("%d",&x);
    for(col=0;col<n;col++)
    {
        for(row=0;row<n;row++)
        {
            printf("%d ",a[row][x]);
        }
        printf("\n");
    }
    return 0;
}

























// //#include<stdio.h>
// int main()
// {
//      int n=3;
//     int a[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int a[3][3];
//     int row=0,col=0
   
//     scanf("%d",&x);
//     for (col=0;col<n; col++)
//     {
//         scanf("%d",a[x][col]);
//         for(row=0;row<n;row++)
//         {
//             scanf("%d",a[row][x]);
//         }
//     }

    



// }