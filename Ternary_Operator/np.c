#include<stdio.h>
int main()
{
    int number;
    printf("enter a number..");
    scanf("%d",&number);
    number < 0? printf("number is negative\n") : number <= 0?printf("number is positive\n") : printf("number is zero\n");
}