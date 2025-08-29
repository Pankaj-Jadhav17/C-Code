#include <stdio.h>

int main()
{
    int x, y;
    long long result = 1;  
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    int i = 0;
    int positiveY = y;
    if (y < 0)
    {
         positiveY = -y;
    }

    while (i < positiveY)
    {
         result *= x;
         i++;
    }

    if (y < 0)
    {
        printf("Result: 1/%lld\n", result);
    } 
    else
     {
        printf("Result: %lld\n", result);
     }

    return 0;
}

