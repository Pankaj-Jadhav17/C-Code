#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number");
    scanf("%d",&n);
    int flag=0;
    for(i=2;i<n;i++)
    {
      if(n%i == 0)
      {
        flag=1;
        break;
       }
    }
    if(flag==1)
    printf("number is not prime\n");
    else
    printf("number is prime\n");
}