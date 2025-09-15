// Write a program to skip all odd numbers 

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2 == 0)
        continue;
        else
        printf("%d is odd\n",i);
    }
}