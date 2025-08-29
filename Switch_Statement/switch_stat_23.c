#include<stdio.h>
int main()
{
    int month;
    printf("enter a number(1-12)\n");
    scanf("%d",&month);
    switch(month)
    {
        case 1: printf("Janevary\n");
                break;
        case 2: printf("februvery\n");
                break;
        case 3: printf("March\n");
                break;
        case 4: printf("April\n");
                break;
        case 5: printf("May\n");
                break;
        case 6: printf("Jun\n");
                break;
        case 7: printf("Julai\n");
                break;
        case 8: printf("oguest\n");
                break;
        case 9: printf("September\n");
                break;
        case 10: printf("October\n");
                break;
        case 11: printf("November\n");
                break;
        case 12: printf("December\n");
                break;
        default: printf("Invalid Input");
    }
}