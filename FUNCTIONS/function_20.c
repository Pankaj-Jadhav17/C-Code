#include<stdio.h>
#include<math.h>
float findSqrt(float num)
{
    return sqrt(num);
}
int main()
{
    float n,result;
    printf("Enter a number");
    scanf("%f",&n);

    if (n<0)
    {
        printf("the square root of negative number is not possible\n");
    }
    else
    {
        result = findSqrt(n);
        printf("Square root of %.2f is %.2f\n", n, result);
    }
    return 0;
}