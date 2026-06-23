#include <stdio.h>

int main() {
    char str[100];
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j] && str[i] != '\n') {
                printf("First repeating character = %c\n", str[i]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No repeating character found.\n");

    return 0;
}