#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[10];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Enter Book Title: ");
        scanf("%s", book[i].title);

        printf("Enter Author Name: ");
        scanf("%s", book[i].author);
    }

    printf("\n----- Library Records -----\n");

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", book[i].bookId);
        printf("Title   : %s\n", book[i].title);
        printf("Author  : %s\n", book[i].author);
    }

    return 0;
}