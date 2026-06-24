#include <stdio.h>

int main() {
    char str[100];
    int i, j, duplicate;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates: ");

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        duplicate = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}