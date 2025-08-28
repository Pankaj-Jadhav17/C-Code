#include<stdio.h>
int main()
{
    int fibval,i=0,n,f0=0,f1=1;
    printf("Enter a number of term: ");
    scanf("%d",&n);
    if(n<=0)
    {
       printf("enter positive integer: ");
    }
    else
    {
        printf("Fibonacci series\n");
        while(i<n)
        {
            printf("%d",f0);
            fibval=f0+f1;
            f0=f1;
            f1=fibval;
            i++;
        }
        printf("\n");
    }
     return 0;
}


/*
#include <stdio.h>

int main() {
    int n, count = 0;
    int a = 0, b = 1, next;

    // Input from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");

        while (count < n) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
            count++;
        }
        printf("\n");
    }

    return 0;
}
*/