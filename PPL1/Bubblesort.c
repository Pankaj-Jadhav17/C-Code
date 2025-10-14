#include<stdio.h>
int main()
{
    int i,j,a[100],n,pass,temp;
    printf("Enter how many elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass-1;i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }   
        }
    }
    printf("print the element in sorted order are..\n");
    for ( i = 0; i < n; i++)
        printf("%d",a[i]);
}