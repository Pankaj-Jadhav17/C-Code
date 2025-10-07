#include<stdio.h>
void merge(int a[], int lb,int mid, int ub);

void mergesort(int a[], int lb,int ub)
{
    if (lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

void merge(int a[], int lb, int mid, int ub)
{
    int temp[20];  // Increased size to match input array
    int i = lb, j = mid + 1, k = lb;

    // Copy elements into temp array
    for (int m = lb; m <= ub; m++)
        temp[m] = a[m];

    while (i <= mid && j <= ub)
     {
        if (temp[i] <= temp[j]) {
            a[k++] = temp[i++];
        } else {
            a[k++] = temp[j++];
        }
    }

    // Copy remaining elements from left half (if any)
    while (i <= mid)
        a[k++] = temp[i++];

    // Copy remaining elements from right half (if any)
    while (j <= ub)
        a[k++] = temp[j++];
}

int main()
{
    int n, a[20], i;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    
    printf("\nEnter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    mergesort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}

