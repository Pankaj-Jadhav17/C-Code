#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%5 == 0)
        continue;
        else
        printf("%d\n",i);
    }
}