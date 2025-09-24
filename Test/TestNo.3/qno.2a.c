#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("\n n : %d\n",n);
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
             printf("%d",col);
             col++;         
        }
    row++;
    printf("\n");
    }  
    return 0;
}