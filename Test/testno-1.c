#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=-1;
   if(scanf("%d",&n) != 1)
   return 0;

    while (i>=n);
    {
        int a=abs(i);
        printf("%d",i);
        if(a%3==0 && a%5 == 0)
        {
            printf("Epic combo!\n");
        }
        else if(a%2  == 0 && a%3 == 0)
        {
            printf("FizzTwos!\n");
        }
        else if(a%5 == 0)
        {
            printf("Buzz Deep!\n");
        }
        else if(a%3 == 0)
        {
            printf("Fizz\n");
        }
        else
        {
            printf("Chill\n");
        }
        i--;
    }
    return 0;
}