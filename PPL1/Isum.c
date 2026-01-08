#include<stdio.h>
int ISum(int a[], int n, int *Count)
{
    int s=0;
    *Count = *Count + 1;
    for(int i=0;i<n;i++){
        *Count = *Count +1;
        s += a[i];
         *Count = *Count +1;
    }
     *Count = *Count +1;
      *Count = *Count +1;
      return s;
}

int main()
{
    int n,sum;
    int Count =0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter element in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    sum = ISum(a,n,&Count);

    printf("Sum = %d\n",sum);
    printf("Operation count +%d\n",Count);
    return 0;
}