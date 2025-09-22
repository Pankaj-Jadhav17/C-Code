#include<stdio.h>

int main()
{
    int i=1,n;
    printf("Enter the multiplication for a table: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
    return 0;
}