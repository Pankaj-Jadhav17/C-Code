#include <stdio.h>
void insertionsort(int a[], int n)
{
    int i, j, key;
    for (j = 1; j < n; j++)
    {
        key = a[j];     
        i = j - 1;

        while (i >= 0 && a[i] > key)   
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}
int main()
{
    int i, n, a[100];

    printf("Enter how many elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    insertionsort(a, n);

    printf("\nThe elements in sorted order are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
