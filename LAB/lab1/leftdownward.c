#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        
        int space = 1;
        while (space <= n-4)
        {
            printf(" ");  
            space++;
        }

        int j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }

        printf("\n"); 
        i++;
    }

    return 0;
}

