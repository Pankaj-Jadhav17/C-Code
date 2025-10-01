#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter a integer: ");
    scanf("%d",&n);

    int *a=(int *)malloc(sizeof(int) *n);
    if (a == NULL)
    {
        printf("memory allocation failed...");
        exit(-1);
    }

    printf("enter a array...\n");
    for( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the array elaments...\n");
    for( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    int pos=0, neg=0, zero=0;
    for ( i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            // printf("Positive");
            pos++;
        }
        else if(a[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }

        for(i=0;i<n;i++)
        {
            for( j = i+1; j < n; j++)
        {
            if (a[i]+a[j]>0)
            {
                printf("(%d, %d)\n",a[i],a[j]);
            }
        }
        }
        free(a);
        return 0;
}