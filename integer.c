#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a positive number: ");
    scanf("%d",&n);
    if(i<n)
    {
        printf("enter positive integers greater than 0\n:");
        return 1;
    }
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("sum of all integers from 1 to %d\n is: %d\n",n,sum);
     return 0;
}



