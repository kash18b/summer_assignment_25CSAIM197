#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3, total, percentage;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter marks in Subject 1: ");
    scanf("%f", &s.marks1);

    printf("Enter marks in Subject 2: ");
    scanf("%f", &s.marks2);

    printf("Enter marks in Subject 3: ");
    scanf("%f", &s.marks3);

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    printf("\n----- MARK SHEET -----\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.marks1);
    printf("Subject 2   : %.2f\n", s.marks2);
    printf("Subject 3   : %.2f\n", s.marks3);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if (s.percentage >= 40)
        printf("Result      : Pass\n");
    else
        printf("Result      : Fail\n");

    return 0;
}