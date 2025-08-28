#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        printf("number i=%d\n",i);
        i++;
    }
    return 0;
}