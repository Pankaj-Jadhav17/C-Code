#include <stdio.h>

int main() {
    int n, m;
    int count = 1;

    // Ask for number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter number of columns: ");
    scanf("%d", &m);

    printf("Number\tSquare\n");

    int row = 0;
    while (row < n) {
        for (int col = 0; col < m; col++) {
            printf("%d\t%d\n", count, count * count);
            count++;
        }
        row++;
    }

    return 0;
}
