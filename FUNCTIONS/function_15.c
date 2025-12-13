#include <stdio.h>

void printPattern(int n) {
    int space = 0;
    int tn = n;

    int i = 1;
    while (i <= n) {

        // print spaces
        int t_space = 0;
        while (t_space < space) {
            printf(" ");
            t_space++;
        }

        // print numbers
        int j = 1;
        while (j <= tn) {
            printf("%d  ", j);
            j++;
        }

        printf("\n");

        space += 2;
        tn--;
        i++;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printPattern(n);   // function call

    return 0;
}
