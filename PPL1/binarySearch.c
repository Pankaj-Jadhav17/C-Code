#include <stdio.h>
int binarySearch(int a[], int n, int x)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    int n, x;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements (in sorted order):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    int result = binarySearch(a, n, x);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
