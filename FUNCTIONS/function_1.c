#include<stdio.h>
void add(int a, int b)
{
     printf("Enter two number");
    scanf("%d%d",&a,&b);
    int c = a+b;
    printf("%d\n",c);
}
int main()
{
    int a,b;
    add(a,b);
    return 0;
}