#include<stdio.h>
int main()
{
int year=0;
printf("enter a year");
scanf("%d",&year);
if((year%4==0 && year%100 != 0) || (year%400 == 0))
printf("%d is leap year",year);
else
printf("% is not leap year",year);
return 0;
}

