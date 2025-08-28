#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Ask the user for a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Use while loop to reverse the number
    while (num != 0) {
        int digit = num % 10;           // Get the last digit
        reversed = reversed * 10 + digit; // Append digit to reversed
        num = num / 10;                 // Remove the last digit
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
