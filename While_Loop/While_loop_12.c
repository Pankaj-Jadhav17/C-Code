#include<stdio.h>
int main()
{
    int i=2,n,isPrime=1;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("%d is neither prime nor composite\n",n);
        return 0;
    }
    while(i<=n/2)
    {
         if(n%2==0)
         {
            isPrime = 0;
            break;
         }
         i++;
    }
    if(isPrime)
    printf("%d is prime number\n",n);
    else
    printf("%d is composite number\n",n);
    return 0;
}



/*
#include <stdio.h>

int main() {
    int num, i = 2, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle edge cases
    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is a composite number.\n", num);

    return 0;
}

*/