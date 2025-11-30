#include<stdio.h>
int evenOdd(int n)
{
    return n%2 == 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(evenOdd(n))
    printf("Even number\n");
    else
    printf("Odd number\n");
    return 0;
}