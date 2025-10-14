#include<stdio.h>
int main()
{
    int month;
    int year;
    printf("Enter month of the year (1-12): ");
    scanf("%d",&month);
    printf("enter year");
    scanf("%d",&year);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 11 || month == 12)
    {
        printf("month has 31 days");
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11 )
    {
        printf("month has 30 days");
    }
    else if(year %4 ==0 && year % 100 != 0 ||(year % 400 == 0))
    {
        printf("month has 29 days (leap year)\n");
    }
    else
    {
        printf("month has 28 days\n");
    }
}