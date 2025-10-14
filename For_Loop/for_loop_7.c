/*Sum of squares of first n numbers*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*%d=%d\n",i,i,i*i);
    }
    printf("\n");
    return 0;
}