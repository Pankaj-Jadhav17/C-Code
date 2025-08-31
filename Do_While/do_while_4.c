#include<stdio.h>
int main()
{
    int n1,n2;
    int ip;
    do{
        printf("enter two numbers");
        scanf("%d%d",&n1,&n2);
        printf("add %d and %d\n",n1,n2);
        printf("subtract %d and %d\n",n1,n2);
        printf("multiply %d and %d\n",n1,n2);
        printf("divide %d and %d\n",n1,n2);
        printf("subtract %d and %d\n",n1,n2);
        scanf("%d",ip);
        switch (ip)
        {
        case 1: printf("addition of %d+%d\n",n1+n2);
            break;
        case 2: printf("subtraction of %d-%d\n",n1-n2);
            break;
        case 3: printf("multiplication of %d*%d\n",n1*n2);
            break;
        case 4:  if (n2 != 0)
                printf("division of %d/%d",n1/n2);
         else
                printf("denominator = %d is zero",n2);
                break;
        default:printf("Invalid number\n");
            break;
        }
    }while(ip != -1);
}