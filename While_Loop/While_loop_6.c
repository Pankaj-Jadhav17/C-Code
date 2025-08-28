#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum += i*i;
        i++;
    }
    printf("sum of all square numbers form 1 to %d is %d\n",i,sum);
    return 0;
}