#include <stdio.h>
int main()
{
    int n,space = 0,tn;
    printf("Enter a number: ");
    scanf("%d", &n);

    tn = n;  

    int i = 1;
    while (i <= n)
    {
        int t_space = 0;
        while (t_space < space)
        {
            printf(" ");
            t_space++;
        }

        int j = 1;
        while (j <= tn)
        {
            printf("%d ",j);
            j++;
        }

        printf("\n"); 

        space += 1; 
        tn--; 
        i++;
    }
    return 0;
}
