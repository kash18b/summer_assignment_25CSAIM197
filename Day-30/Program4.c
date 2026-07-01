#include <stdio.h>

int roll[100];
char name[100][50];
float marks[100];
int n;

void addStudents();
void displayStudents();
void searchStudent();

int main() {
    int choice;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    do {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudents();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

void addStudents() {
    int i;

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent records added successfully!\n");
}

void displayStudents() {
    int i;

    printf("\n----- STUDENT RECORDS -----\n");
    printf("Roll No.\tName\t\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int i, searchRoll;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(roll[i] == searchRoll) {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student Record Not Found!\n");
}