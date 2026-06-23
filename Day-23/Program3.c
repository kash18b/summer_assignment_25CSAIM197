#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp;
    int i, j, len1, len2, anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }

    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    if (len1 != len2) {
        anagram = 0;
    } else {
        for (i = 0; i < len1 - 1; i++) {
            for (j = i + 1; j < len1; j++) {
                if (str1[i] > str1[j]) {
                    temp = str1[i];
                    str1[i] = str1[j];
                    str1[j] = temp;
                }

                if (str2[i] > str2[j]) {
                    temp = str2[i];
                    str2[i] = str2[j];
                    str2[j] = temp;
                }
            }
        }

        for (i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}