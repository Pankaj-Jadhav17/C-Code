#include<stdio.h>
int main()
{
    int n=0;
    printf("enter a number..");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int flag=0;
        for(int j=2;j<i;++j)
        {
            if(i%j == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag=0)
        printf("%d is prime\n",i); 
        else
        printf("%d is not prime\n",i);
    }
}