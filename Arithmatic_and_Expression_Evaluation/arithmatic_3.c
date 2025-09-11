#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    double result;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    result = (x*x*x)+(3*x*x)-(4*x)-(y*y*y);
    printf("result = %f\n",result);
}




/*
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    int result;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    result = (x*x*x)+(3*x*x)-(4*x)-(y*y*y);
    printf("result = %d\n",result);
}
*/