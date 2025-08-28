#include<stdio.h>
int main()
{
    int i=1, sum=0, n;
    printf("enter a number ");
    scanf("%d",&n);

    while (i<=n)
    {
        sum += i;
         i++;
    }

    printf("sum of all integers from 1 to %d is %d\n",n,sum);
    return 0;

}