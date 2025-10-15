#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        int space = 1;
        while (space<i)
        {
            printf(" ");
            space++;
        }
        int j=i;
        while(j<=n)
        {
            printf("%d",j-i+1);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}