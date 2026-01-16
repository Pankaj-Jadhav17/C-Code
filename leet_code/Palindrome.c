#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

bool isPalindrome(int x) {
    int original = x;
    int reverse = 0;
    int MAX = INT_MAX / 10, MIN = INT_MIN / 10;

    while (x != 0) {
        if (reverse > MAX || reverse < MIN) {
            return false;
        }
        reverse = reverse * 10 + (x % 10);
        x /= 10;
    }

    return reverse == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
