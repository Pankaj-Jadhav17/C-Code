#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;      // get last digit
        reversed = reversed * 10 + digit;
        num /= 10;                 // remove last digit
    }
    if (original == reversed)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a Palindrome.\n", number);
    else
        printf("%d is NOT a Palindrome.\n", number);

    return 0;
}
