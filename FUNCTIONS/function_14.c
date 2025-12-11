#include <stdio.h>

int linearSearch(int a[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(a[i] == key)
            return i;   // return index
    return -1;          // not found
}

int main() {
    int n, arr[100], key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int pos = linearSearch(arr, n, key);

    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", pos);

    return 0;
}
