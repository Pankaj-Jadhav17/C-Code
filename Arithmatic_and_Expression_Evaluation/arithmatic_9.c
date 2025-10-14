#include <stdio.h>

int main() {
    float num;
    int result;

    printf("Enter a floating-point number: ");

    // Try to read float and check return value
    result = scanf("%f", &num);

    if (result != 1) {
        printf("Invalid input! Please enter a valid floating-point number.\n");

        // Clear input buffer to avoid infinite loop
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {
            // discard characters
        }
    } else {
        printf("You entered: %.3f\n", num);
    }

    return 0;
}
