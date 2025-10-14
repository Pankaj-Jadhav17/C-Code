#include<stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    int ip;
    int i,ans=0;
    while(1)
    {
        printf("enter two numbers");
        scanf("%d%d",&n1,&n2);
        printf("1. add %d and %d\n",n1,n2);
        printf("2. subtract %d and %d\n",n1,n2);
        printf("3. multiplication %d and %d\n",n1,n2);
        printf("4. division %d and %d\n",n1,n2);
        printf("-1 to 0 exist");
        scanf("%d",&ip);
        if(ip == -1)
        break;
        switch (ip)
        {
        case 1: 
               printf("addition of %d+%d",n1+n2);
               break;
        case 2:
               printf("subtraction of %d-%d",n1-n2);
               break;
        case 3:  
               printf("multiplication of %d*%d",n1*n2);
               break;
        case 4: if (n2 != 0)
                printf("division of %d/%d",n1/n2);
         else
                printf("denominator = %d is zero",n2);
                for(int i=0;i<10;i++)
                {
                     ans += i;
                     printf("ans = %d",ans);
                }
                break;
        default: ("Invalid input");
        }
    }
}