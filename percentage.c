#include<stdio.h>
int main()
{
    int percentage,n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n>90 && n<=100)
    {
        printf("grade A\n");
    }
    else if(n>80 && n<=90)
    {
        printf("grade B\n");
    }
     else if(n>70 && n<=80)
    {
        printf("grade C\n");
    }
     else if(n<=70 && n>50)
    {
        printf("grade D\n");
    }
     else if(n<=50 && n>=35)
    {
        printf("grade E\n");
    }
    else
    {
        printf("grade F\n");
    }
    return 0;
}