#include<stdio.h>
int main()
{
char operation;
int a,b;
printf("enter operation(+,-,*,/)\n");
scanf("%c",&operation);
printf("enter two number\n");
scanf("%d%d",&a,&b);
double ans = 0;
switch(operation)
{
case '+': ans = a+b;
break;
case '-': ans = a-b;
break;
case '*': ans = a*b;
break;
case '/': ans= a/b;
break;
default: printf("Invalid operation");
}
printf("ans = %f\n",ans);
}

