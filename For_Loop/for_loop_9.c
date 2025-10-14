#include<stdio.h>
int main()
{
    int i,num,reverse=0;
    printf("enter two numbers: ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        int digit = num%10;
        reverse= reverse * 10 + digit;
        num = num/10;
    }
    printf("reversr number %d\n",reverse);
    return 0;
}