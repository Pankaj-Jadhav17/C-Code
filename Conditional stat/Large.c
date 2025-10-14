#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    if(b>=a)
    printf("%d number is largest\n");
    else
    printf("%d number is not largest\n");
}