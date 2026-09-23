#include<stdio.h>
int main()
{
    int n1=0,n2=0;
    do{
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    printf("add  =%d",n1+n2);

    }while (n1 != 0 && n2 != 0);
}