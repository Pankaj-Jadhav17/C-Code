#include<stdio.h>
int main()
{
int number;
int n;
printf("enter a number\n");
scanf("%d",&number);
if(number >= 0)
{
printf("Positive number\n");
if(n%2 == 0)
printf("number is even\n");
else
printf("number is odd\n");
}
else
{
printf("Negative number\n");
}
}


