#include <stdio.h>
#include <math.h> 
int main() 
{
    int x, y;
    double numerator, denominator, result;  
    printf("Enter two integers (x and y): ");
    scanf("%d%d",&x,&y);
    double expr = 4 * pow(x,2) + 8 * pow(y,2) + pow(x,3) + 5;
    if (expr < 0) 
    {
        printf("Error: Expression inside square root is negative\n");
        return 1;
    }  
    numerator = sqrt(expr);
    denominator = 2 * pow(x, 2);
    if (denominator == 0) 
    {
        printf("Error: Division by zero (x cannot be zero)\n");
        return 1;
    }
    result = numerator / denominator;
    printf("Result = %.5f\n", result);
    return 0;
}
