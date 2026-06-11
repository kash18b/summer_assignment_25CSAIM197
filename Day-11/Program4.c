#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial not defined\n");
        return 0;
    }

    printf("Factorial = %lld\n", factorial(num));

    return 0;
}