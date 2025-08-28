#include<stdio.h>
int main()
{
    unsigned long long fact=1;
    int i=1,n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if(n<0)
    {
    printf("factorial is not define for negative number\n");
    }
    else
    {
    while (i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("factorial of %d = %llu\n",n,fact);
}
    return 0;
}




