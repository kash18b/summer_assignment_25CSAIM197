#include <stdio.h>

int main() {
    char str[100];
    int words = 0, i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if ((str[i] == ' ' || str[i] == '\n') &&
            str[i + 1] != ' ' &&
            str[i + 1] != '\0' &&
            str[i + 1] != '\n') {
            words++;
        }
        i++;
    }

    if (str[0] != '\0' && str[0] != '\n')
        words++;

    printf("Number of words = %d\n", words);

    return 0;
}