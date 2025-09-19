#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of integers: \n");
    scanf("%d", &n);

    int a[n];

   
   for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int ans_e = 0, ans_o = 0;

   
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0) {
            ans_e += a[i];
        } else {
            ans_o += a[i];
        }
    }
    printf("Sum of odd numbers = %d\n", ans_o);
    printf("Sum of even numbers = %d\n", ans_e);

    return 0;
}
