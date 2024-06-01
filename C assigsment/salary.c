/*Accept monthly salary from the user and deduct 10%
insurance premium, 10% loan installment find out of
remaining salary.*/
#include<stdio.h>
int main() 
{
    float salary, insurancePremium, loanInstallment, remainingSalary;

    // User Input - Monthly Salary
    printf("Enter the monthly salary: ");
    if (scanf("%f", &salary) != 1 || salary <= 0) {
        printf("Invalid input. Please enter a positive number for the monthly salary.\n");
        return 1; // Indicate error
    }

    // Calculate 10% insurance premium
    insurancePremium = salary * 0.10;

    // Calculate 10% loan installment
    loanInstallment = salary * 0.10;

    // Calculate remaining salary
    remainingSalary = salary - insurancePremium - loanInstallment;

    // Output the results
    printf("The insurance premium deducted is: %.2f\n", insurancePremium);
    printf("The loan installment deducted is: %.2f\n", loanInstallment);
    printf("The remaining salary after deductions is: %.2f\n", remainingSalary);

    return 0; // Indicate successful completion
}