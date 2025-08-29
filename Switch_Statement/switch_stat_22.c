#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day of the week(1-7)");
    scanf("%d",&day);
    
    switch(day)
    {
    case 1: printf("Sunday\n");
            break;
     case 2: printf("Monday\n");
            break;
     case 3: printf("Tuesday\n");
            break;
     case 4: printf("Wedday\n");
            break;
     case 5: printf("Thusday\n");
            break;
     case 6: printf("Friday\n");
            break;
     case 7: printf("Saturday\n");
            break;
   
    default: printf("Invalid input\n");
            break;
    }
}