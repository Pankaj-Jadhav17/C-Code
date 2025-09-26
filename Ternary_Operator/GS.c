#include<stdio.h>
int main()
{
int a=0,b=0;
printf("enter a number\n");
scanf("%d%d",&a,&b);
if((a>b) ? printf("a=%d is large",a): printf("b=%d is large",b));
return 0;
}
