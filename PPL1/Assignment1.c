#include<stdio.h>
int main()
{
    long int i,j,n,temp,a[n],min;
    printf("Enter how many elements: ");
    scanf("%ld",&n);
    for(i = 0; i < n; i++)
        scanf("%ld",&a[i]);
        for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[min])
                {
                    min=j;
                }
            }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
        printf("\n the element in sorted order are....\n");
        for(i=0;i<n;i++)
        {
            printf("%4ld\n",a[i]);
        }
        
}