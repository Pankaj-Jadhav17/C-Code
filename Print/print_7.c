#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("before swaping is a=%d and b=%d",a,b);
    a=b;
    b=a;
    printf("after swaping is a=%d and b=%d",a,b);
    return 0;
}