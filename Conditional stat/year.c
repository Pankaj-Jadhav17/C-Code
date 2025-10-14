#include<stdio.h>
int main()
{
    char year;
    printf("enter a year");
    scanf("%c",&year);
    if(year%400==0 && year%100 !=0 || year%4==0)
        printf("Year is leap"); 
    else
        printf("year is not leap");
}
