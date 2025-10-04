#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,i;
    printf("Enter a integer: ");
    scanf("%d",&n);
    
    int *a=(int *)malloc(sizeof(int) *n);
    if(a==NULL)
    {
        printf("Error allocating memory...");
        exit(-1);
    }

    printf("Entered a array elements...");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    // printf("Entered a array elements....\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d",a[i]);
    // }
    
    int pos=0,neg=0,zero=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0){
            pos++;
        }
        else if(a[i]<0){
            neg++;
        }
        else {
            zero++;
        }
    }
    printf("Positive : %d\t Negative : %d\t zero : %d\n",pos,neg,zero);
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]+a[j]==0)
            {
                printf("%d,%d",a[i],a[j]);
                printf("\n");
            }
         
        }
    }
    free(a);
    return 0;
}