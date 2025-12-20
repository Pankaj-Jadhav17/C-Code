#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.3lf\n", root1);
        printf("Root 2 = %.3lf\n", root2);
    } else if (discriminant == 0) {
        // One real root (both roots equal)
        root1 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root = %.3lf\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.3lf + %.3lfi\n", realPart, imagPart);
        printf("Root 2 = %.3lf - %.3lfi\n", realPart, imagPart);
    }

    return 0;
}
