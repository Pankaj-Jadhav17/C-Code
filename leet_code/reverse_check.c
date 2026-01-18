#include <stdio.h>
#include <limits.h>

long long reverse_value(int x) {
    long long n = x;
    int sign = (n < 0) ? -1 : 1;
    n = n * sign; /* make n positive */
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev * sign;
}

int main(void) {
    int x;
    if (scanf("%d", &x) != 1) return 0;
    long long rev = reverse_value(x);
    printf("%lld\n", rev);
    return 0;
}
