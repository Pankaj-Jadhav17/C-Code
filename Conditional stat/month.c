#include<stdio.h>
int main()
{
    int month;
    int day;
    printf("Enter month of the year (1-12): ");
    scanf("%d",&month);
    printf("Enter day of a month (30/31/28)");
    scanf("%d",&day);
    if(month==1)
    {
        printf("Januvary\n");
        day=31;
    }
    else if(month==2)
    {
        printf("februvery\n");
    }
     else if(month==3)
    {
        printf("March\n");
    }
     else if(month==4)
    {
        printf("April\n");
    }
     else if(month==5)
    {
        printf("May\n");
    }
     else if(month==6)
    {
        printf("June\n");
    }
     else if(month==7)
    {
        printf("July\n");
    }
     else if(month==8)
    {
        printf("Oguest\n");
    }
     else if(month==9)
    {
        printf("September\n");
    }
     else if(month==10)
    {
         printf("October\n");
    }
     else if(month==11)
    {
        printf("November\n");
    }
      else if(month==12)
    {
        printf("December\n");
    }
   else
   {
      printf("invalid month\n");
   }
    
}