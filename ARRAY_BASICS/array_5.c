#include<stdio.h>
int main()
{
    int n,i,j,a[n];
    printf("Enter number of entegers: ");
    scanf("%d",&n);
    printf("enter %d elements",i);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int i=0;
    int j=n-1;
    int isPalindrome=1;
    while (i<n)
    {
        if(a[i] != a[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome)
    printf("number is palindrome\n");
    else
    printf("number is not palidrome\n");

    return 0;
}


/*
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int a[n]; // VLA — okay in C99 or later

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j = n - 1;
    int isPalindrome = 1; // Assume true

    while (i < j)
    {
        if (a[i] != a[j])
        {
            isPalindrome = 0; // Found a mismatch
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
*/