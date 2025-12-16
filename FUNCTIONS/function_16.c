#include <stdio.h>

// Function to print the pattern
void printPattern(int n)
{
    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - 4)
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
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    printPattern(n);

    return 0;
}
