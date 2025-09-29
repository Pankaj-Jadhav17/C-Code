#include<stdio.h>
int main()
{
    int amount=1;
    printf("Enter a number: ");
    scanf("%d",&amount);
    if(amount<50)
    {
        printf("the Discount is 0% \n");
    }
    else if (amount>=50 && amount<100)
    {
        printf("the discount is 10% \n");
    }
    else if (amount<=200)
    {
        printf("The discount is 20% \n");
    }
    else if(amount<=200)
    {
        printf("The discount is 30% \n");
    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}