#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    int condition;
    if(number<10)
    {
        condition 1;
    }
    else if(number == 10)
        condition 2;
    else
        conditon 3;
    switch (number)
    {
    case 1: printf("number is small\n");
            break;

    case 2: printf("number is large\n");
            break;
    case 3: printf("number is equal\n");
            break;
    default: printf("Invalid input\n");
             break;
    }
    
}


/*
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    switch (number)
    {
    case 1: if(number<10)
    {
        printf("number is small\n");
    }
        break;

    case 2: if(number>=10)
    {
        printf("number is large\n");
    }
    else
    {
        printf("number is equal\n");
    }
    break;
    default: printf("Invalid input\n");
        break;
    }
    return 0;
}*/