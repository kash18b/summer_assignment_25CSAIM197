#include <stdio.h>

int main() {
    int a[10][10], rows, cols, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-wise sums:\n");

    for (int i = 0; i < rows; i++) {
        sum = 0;

        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}