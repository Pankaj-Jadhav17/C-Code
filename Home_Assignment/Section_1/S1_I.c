#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int sum1,sum2,sum3;
    sum1=a+b;
    sum2=a-b;
    sum3=a/b;
    printf("Addition : %d\n substraction : %d\n Division : %d\n",sum1,sum2,sum3);
    return 0;
}