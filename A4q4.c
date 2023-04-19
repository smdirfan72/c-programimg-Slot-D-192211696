#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

struct employee {
    int eno;
    char ename[30];
    float salary;
};

int main() {
    int n, i, max_index;
    float max_salary = -1.0;
    struct employee employees[MAX_EMPLOYEES];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee name: ");
        scanf("%s", employees[i].ename);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find employee with highest salary
    for (i = 0; i < n; i++) {
        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

    // Display details of employee with highest salary
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee number: %d\n", employees[max_index].eno);
    printf("Employee name: %s\n", employees[max_index].ename);
    printf("Salary: %.2f\n", employees[max_index].salary);

    return 0;
}
