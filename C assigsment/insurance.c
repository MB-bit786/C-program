#include <stdio.h>

int main() {
    float salary, premium;

    // Prompt the user to enter their salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculate the insurance premium based on the salary
    if (salary < 20000) {
        premium = 0.05 * salary;
    } else if (salary <= 50000) {
        premium = 0.07 * salary;
    } else {
        premium = 0.10 * salary;
    }

    // Display the insurance premium
    printf("The insurance premium is: %.2f\n", premium);

    return 0;
}
