#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student stu[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &stu[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", stu[i].name);

        printf("Enter Marks: ");
        scanf("%f", &stu[i].marks);
    }

    printf("\nStudent Records:\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", stu[i].rollNo);
        printf("Name: %s\n", stu[i].name);
        printf("Marks: %.2f\n", stu[i].marks);
    }

    return 0;
}