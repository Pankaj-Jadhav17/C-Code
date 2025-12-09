#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float p, r, t;
    printf("Enter principal, rate, time: ");
    scanf("%f %f %f", &p, &r, &t);

    float si = simpleInterest(p, r, t);
    printf("Simple Interest = %.2f\n", si);

    return 0;
}
