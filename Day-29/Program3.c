#include <stdio.h>

struct Item {
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[10];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &items[i].itemId);

        printf("Enter Item Name: ");
        scanf("%s", items[i].itemName);

        printf("Enter Quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &items[i].price);
    }

    printf("\n----- Inventory Details -----\n");

    for (i = 0; i < n; i++) {
        printf("\nItem %d\n", i + 1);
        printf("Item ID   : %d\n", items[i].itemId);
        printf("Item Name : %s\n", items[i].itemName);
        printf("Quantity  : %d\n", items[i].quantity);
        printf("Price     : %.2f\n", items[i].price);
    }

    return 0;
}