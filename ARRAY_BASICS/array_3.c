#include<stdio.h>
int main()
{
    int i,j,n,x,a[10],found;
    printf("Enter 10 number");
    scanf("%d",&n);

    printf("Enter %d elements:");
    for(i=0;i<n;i++)
    {
    printf("i=%d\n",i+1);
    scanf("%d element\n",&a[i]);
    }

     printf("Enter the value of sum(target sum)\n");
     scanf("%d",&x);

    printf("Pair of indices whose element is sum of %d",x);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                printf("a[i]=%d+a[j]=%d, %d+%d = %d \n",a[i],a[j],i,j,x);
                found = 1;
            }
        }
        if(!found)
        {
            printf("no such a pair found\n");
        }
    }
    return 0;
}





   