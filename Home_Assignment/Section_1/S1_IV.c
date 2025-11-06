// Swap two numbers without using a third variable

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a two numbers: ");
    scanf("%d%d",&a,&b);
    printf("after swaping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Before swaping a=%d and b=%d\n",a,b);
    return 0;
}