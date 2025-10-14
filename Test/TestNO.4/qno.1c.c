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
    int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) {
            a[i] = 0;
        } else {
            a[i] = 1;
        }
    }

    qsort(a, n, sizeof(int), compare);
    printf("Modified sorted array:\n");

    for (int i = 0; i < n; i++) 
    {
        printf("%d\n", a[i]);
    }
    free(a);
    return 0;
}
