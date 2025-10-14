#include <stdio.h>

int main() {
    int currentYear, destinationYear;

    printf("Enter current year: ");
    scanf("%d", &currentYear);
    printf("Enter destination year: ");
    scanf("%d", &destinationYear);

    if (destinationYear < currentYear) {
        printf("You're going to the past!\n");
    } else if (destinationYear > currentYear) {
        printf("You're going to the future!\n");
    } else {
        printf("You didn't time travel at all!\n");
    }

    return 0;
}
