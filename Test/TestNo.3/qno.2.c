#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("\n n : %d\n",n);
    int row=1,col=1;      // int i=1,j=1;     
   for(row=1;row<=n;row++)    //for(i=1;i<=n;i++)  
    {
        for(col=1;col<=row;col++)  //for (j=1;j<=i;j++)
        {
            printf("%d",col);  //printf("%d",j);  
        }
        printf("\n");
    }
    return 0;
}