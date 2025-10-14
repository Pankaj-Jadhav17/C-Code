#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        if (n%2==0)
    {
        printf("number is odd\n");
    }
    else if (n%2==0 && n%2==4)
    {
        printf("number %d is Even but not a multiple of 4\n",i);
    }
    else
    {
        printf("number %d is even and multiply by 4\n",i);
    }
    i++;
}
printf("\n");
return 0;
}