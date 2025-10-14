#include<stdio.h>
int main()
{
char op;
int a=0,b=0;
printf("enter opration (+,-,*,/) =");
scanf("%c",&op);
printf("enter two numbers =");
scanf("%d%d",&a,&b);
double ans=0.0;
if(op = '+')
ans=a+b;
else if(op = '-')
ans=a-b;
else if(op = '*')
ans=a*b;
else if(op = '/')
ans = b!=0 ? a/b:0;
else
printf("invalid operation %c",op);
printf("answer = %f",ans);
return 0;
}

