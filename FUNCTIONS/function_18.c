#include <stdio.h>

// Function to find square root
float findSqrt(float num)
{
    float guess = num;
    float eps = 0.00001;

    while ((guess * guess - num) > eps)
    {
        guess = (guess + num / guess) / 2;
    }
    return guess;
}

int main()
{
    float n, result;

    printf("Enter a number: ");
    scanf("%f", &n);

    if (n < 0)
    {
        printf("Square root of negative number is not possible\n");
    }
    else
    {
        result = findSqrt(n);
        printf("Square root of %.2f is %.4f\n", n, result);
    }

    return 0;
}
