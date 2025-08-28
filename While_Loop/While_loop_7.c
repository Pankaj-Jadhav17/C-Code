#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Print the multiplication table for a number: ");
    scanf("%d",&n);
    while (i<=10)
    {
        printf("%d*%d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
