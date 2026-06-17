#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n1, n2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of arrays:\n");

    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        int found = 0;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}