#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n----- EMPLOYEE RECORDS -----\n");
    printf("ID\tName\t\tDepartment\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }

    return 0;
}