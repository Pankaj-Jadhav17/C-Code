#include <stdio.h>
#include <math.h>  
int main()
 {
    int x, y;
    double result;
    printf("Enter two integers (x and y): ");
    scanf("%d%d", &x,&y);
    double expr = 2 * pow(x,2) + 4 * pow(y, 2) + pow(x, 3) + 10;
    if (expr < 0) 
    {
        printf("Error: Expression inside square root is negative.\n");
        return 1;
    }
    result = sqrt(expr);
    printf("Result = %3f\n", result);
    return 0;
}
