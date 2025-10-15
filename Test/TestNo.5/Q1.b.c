#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
     int *a=(int *)malloc(sizeof(int) *n);

     printf("Enter %d elements: ",n);
     for (int i = 0; i < n; i++)
     {
        scanf("%d",&a[i]);
     }
     for (int i = 0; i < n; i++)
     {
        if (a[i]%2==0)
          a[i]=0;
          else
          a[i]=1;
     }
     //bubble sort
     for (int i = 0; i < n; i++)
     {
        for(int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
     printf("\nModified and sorted array:\n");
     for (int i = 0; i < n; i++)
          printf("%d",a[i]);
          free(a);
          printf("\n");
          return 0;
}