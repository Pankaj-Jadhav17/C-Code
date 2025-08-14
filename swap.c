#include<stdio.h>
int main()
{
int a=0,b=0;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("before swaping is : a=%d, b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swaping is : a=%d, b=%d\n",a,b);
}
