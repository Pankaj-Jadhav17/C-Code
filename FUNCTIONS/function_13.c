#include <stdio.h>

void inputArray(int a[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void printArray(int a[], int n) {
    printf("Array elements: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main() {
    int n, arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    inputArray(arr, n);
    printArray(arr, n);

    return 0;
}
