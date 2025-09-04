
#include <stdio.h>
int main() {
    int height, i = 1, j, space;

    printf("Enter height: ");
    scanf("%d", &height);

    while (i <= height) {
        space = 1;
        while (space <= height - i) {
            printf(" ");
            space++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
