#include <stdio.h>

int main()
 {
    int a, b, x, y, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (x * y) / gcd; 

    printf("GCD (HCF) of %d and %d = %d\n", x, y, gcd);
    printf("LCM of %d and %d = %d\n", x, y, lcm);

    return 0;
}
