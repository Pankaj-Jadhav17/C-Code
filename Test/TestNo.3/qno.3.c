#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,i;
    printf("enter a integer: ");
    scanf("%d",&n);
    printf("\n n : %d\n",n);

    int *a=(int *)malloc(n * sizeof(int));
    if(a== NULL)
    {
        printf("\n Memory allocated failed...");
        exit(-1);
    }

    printf("Enter array element: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The entered array is...");
    for(i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        sum += a[i];
        printf("sum:%d",sum);
    }

    double avg = sum/n;
    printf("\n Average:%f\n",avg);
    free(a);
    return 0;
}