#include<stdio.h>
int main()
{
    int n;
    printf("enter a number..");
    scanf("%d",&n);
    (n%2 == 0)? printf("n=%d is even\n",n) : printf("n=%d is odd\n",n);
}