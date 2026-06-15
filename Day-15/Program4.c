#include <stdio.h>

int main() {
    int arr[100], n, temp[100];
    int index = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index++] = arr[i];
        }
    }

    while (index < n) {
        temp[index++] = 0;
    }

    printf("Array after moving zeros to the end:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}