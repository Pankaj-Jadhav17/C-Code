#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }

    qsort(arr, n, sizeof(int), compare);
    printf("Modified sorted array:\n");

    for (int i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}
