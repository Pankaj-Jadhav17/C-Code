/*Read two integers, and perform addition, substraction and division without using a
third variable*/

#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int sum1,sum2,sum3,sum4;
    sum1 = a+b;
    sum2 = a-b;
    sum3 = a*b;
    sum4 = a/b;
    printf("Addition : %d\n substraction : %d\n multiplication : %d\n Division : %d\n",sum1,sum2,sum3,sum4);
    return 0;
}