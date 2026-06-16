#include <stdio.h>

int main() {
    int arr[100], n;
    int sum = 0, expectedSum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements (from 1 to %d with one missing):\n", n - 1, n);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("Missing number = %d\n", expectedSum - sum);

    return 0;
}