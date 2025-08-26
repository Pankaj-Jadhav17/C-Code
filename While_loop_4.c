#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    i=1;
   
    while (i<=n)
    {
        sum += i;
         i += 2;
    }
    printf("sum of all odd numbers from 1 to %d is %d\n",n,sum);
    return 0;
}