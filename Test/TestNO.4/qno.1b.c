#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i=n;
    while (i>=1)
    {
        int j=1;
        while (j<=i)
        {
             printf("%d",j);
             j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}