#include<stdio.h>
int main()
{
    int count=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    else
    {
        if (n<0)
        n = -n;
    while (n>0)
    {
        n=n/10;
        count++;
    }
}
    printf("The number of digit is %d\n",count);
    return 0;
}