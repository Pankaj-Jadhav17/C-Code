#include<stdio.h>
#include<math.h>
int main()
{
    int n=0;
    int i,j,flag;
    printf("enter a number..");
    scanf("%d",&n);
    int st=sqrt(i);
    for(i=0;i<=n;i++)
    {
        int flag=0;
        sqrt-(i);
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        printf("%d is not prime\n",i);
        else
        printf("%d is prime\n",i);

    }
}