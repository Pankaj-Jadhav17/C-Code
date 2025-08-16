#include <stdio.h>

int main() {
    int num, sum = 0;

    while (1) {
        printf("Input: ");
        scanf("%d", &num);

        if (num == -1) {
            printf("End program.\n");
            break;
        }

        sum += num;

        if (sum % 13 == 0) {
            sum = 0;
        }

        printf("Sum = %d\n", sum);
    }

    return 0;
}
