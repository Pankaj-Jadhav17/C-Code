// Swap two numbers using a third variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    int c=0;
    c=a;
    a=b;
    b=c;
    printf("swap b=%d and a=%d",b,a);
    return 0;
}