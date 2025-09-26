#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers..");
    scanf("%d%d",&a,&b);
    a>b? printf("a=%d is small\n",a) : printf("b=%d is small\n",b);
}