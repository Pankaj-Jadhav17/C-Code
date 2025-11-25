#include<stdio.h>
#include<math.h>
int isPrime(int p)
{
    for (int i = 2; i < sqrt(p); i++)
    {
        if (p%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int p;
    printf("Enter p");
    scanf("%d",&p);
    if (isPrime(p))
   
    printf("%d\n",isPrime);
    else
    printf("number is not prime\n");
    
}