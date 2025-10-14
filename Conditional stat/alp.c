#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet\n");
    scanf("%c",&ch);
    if(ch==0)
    {
     printf("%c is alphabet\n",ch);
    }
    else
    {
    printf("%c is number\n",ch);
    }

   
}