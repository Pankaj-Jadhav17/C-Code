#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,count=0;
    printf("enter n integers: ");
    scanf("%d",&n);

    int *a = (int *)malloc(sizeof(int) *n);
    if (a==NULL)
    {
        printf("Memory allocation failed...\n");
        return 1;
    }

    printf("enter a array...\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
    }
    printf("number of good pair : %d\n",count);
    free(a);
    return 0;
}



