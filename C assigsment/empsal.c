#include <stdio.h>

#define NUM_EMPLOYEES 5

int main() {
    char names[NUM_EMPLOYEES][50]; // Array to store the names of employees
    double salaries[NUM_EMPLOYEES]; // Array to store the salaries of employees
    double totalSalary = 0.0;
    double averageSalary;
    int i;

    // Input names and salaries of employees
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]); // Using %s for simplicity, assumes names are single words without spaces
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);

        // Add the salary to the total salary
        totalSalary += salaries[i];
    }

    // Calculate the average salary
    averageSalary = totalSalary / NUM_EMPLOYEES;

    // Output the total and average salary
    printf("\nTotal Salary: %.2lf\n", totalSalary);
    printf("Average Salary: %.2lf\n", averageSalary);

    // Optionally, output the names and salaries of employees
    printf("\nEmployee Details:\n");
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Name: %s, Salary: %.2lf\n", names[i], salaries[i]);
    }

    return 0;
}
