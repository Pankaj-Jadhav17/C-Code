#include<stdio.h>
int main()
{
    int n=3;
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row=0,col=0;
   
    for ( col = 0; col < n; col++)
    {
        printf("%d",a[0][col]);
    }
    printf("\n");
    return 0;
}