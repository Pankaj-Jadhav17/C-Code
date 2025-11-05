/*Read two integers, and perform addition, substraction and division without using a
third variable*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a two variables: ");
    scanf("%d%d",&a,&b);
     int sum1,sum2,sum3;
    sum1=a+b;
    sum2=a-b;
    sum3=a/b;
    printf("Addition : %d\n substraction : %d\n Division : %d\n",sum1,sum2,sum3);
    return 0;
}
