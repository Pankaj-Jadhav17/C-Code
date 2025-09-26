#include<stdio.h>
int main()
{
    int a=0,b=0,max;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    max=a>b? a:b;
    printf("max = %d\n",max);
}