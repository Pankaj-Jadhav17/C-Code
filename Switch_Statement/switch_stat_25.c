#include <stdio.h>

int main()
{
    int number;
    int category;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 10)
        category = 0;
    else if(number == 10)
        category = 1;
    else
        category = 2;

    switch(category)
    {
        case 0:
            printf("number is small\n");
            break;
        case 1:
            printf("number is equal\n");
            break;
        case 2:
            printf("number is large\n");
            break;
        default:
            printf("Unknown category\n");
            break;
    }
    return 0;
}
