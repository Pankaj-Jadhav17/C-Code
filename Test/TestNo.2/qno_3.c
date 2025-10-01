#include<stdio.h>
int main()
{
    int n=5,i=n;
    printf("enter a number: ");
    scanf("%d",&n);
    while (i>=1)
    {
        printf("-%d",i);
        --i;
    }
    printf("\n");
    return 0;
}