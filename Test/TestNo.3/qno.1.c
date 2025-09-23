#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("Enter a negative integer: ");
    scanf("%d",&n);
    printf("\n n : %d\n",n);
    int i=-1;
    while (i>=n);
    {
        if(i%3==0 && i%5 == 0)
            printf("%d:Epic combo!\n",i);
        else if(i%2  == 0 && i%3 == 0)
            printf("%d:FizzTwos!\n",i);
        else if(i%5 == 0)
            printf("%d:Buzz Deep!\n",i);
        else if(i%3 == 0)
            printf("%d:Fizz\n",i);
        else
            printf("%d:Chill\n",i);
        i--;
    }
    return 0;
}