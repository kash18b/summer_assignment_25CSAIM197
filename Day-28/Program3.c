#include <stdio.h>

struct Ticket {
    char name[50];
    int seatNo;
};

int main() {
    struct Ticket t;
    int choice;
    int booked = 0;

    do {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (booked == 0) {
                    printf("Enter Passenger Name: ");
                    scanf("%s", t.name);

                    printf("Enter Seat Number: ");
                    scanf("%d", &t.seatNo);

                    booked = 1;
                    printf("Ticket Booked Successfully!\n");
                } else {
                    printf("Ticket already booked.\n");
                }
                break;

            case 2:
                if (booked == 1) {
                    printf("\n--- Ticket Details ---\n");
                    printf("Passenger Name: %s\n", t.name);
                    printf("Seat Number: %d\n", t.seatNo);
                } else {
                    printf("No ticket booked yet.\n");
                }
                break;

            case 3:
                printf("Thank you for using the system.\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 3);

    return 