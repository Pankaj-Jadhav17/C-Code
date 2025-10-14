#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        n%2 == 0;
        i++;
    }
     printf("%d\n",i);
    return 0;
}