#include <stdio.h>

int isPalindrome(int n) {
    int original = n;
    int reverse = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return original == reverse;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}