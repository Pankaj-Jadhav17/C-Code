#include <stdio.h>

int main() 
{
     int n;
    int a[n];
   printf("enter number of integer: ");
   scanf("%d",&n);
   printf("enter %d element",n);
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

   int i = n-1;
    int j = 0;

    printf("Array elements in reverse order:\n");
    while (j < n) 
    {
        printf("%d ", a[j]);
        i++;
        j--;
    }
    printf("\n");
    return 0;
}

