#include <stdio.h>

int main()
{
    int n, i, key;

    printf("Enter how many elements: ");
    scanf("%d", &n);

    int a[n];   // declare array AFTER reading n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }

    printf("Element not found\n");
    return 0;
}





