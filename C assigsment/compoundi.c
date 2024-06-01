#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest, amount;
    int n;

    // User Input - Principal Amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // User Input - Rate of Interest
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    // User Input - No. of Times Interest is Compounded per year
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // User Input - Time Period
    printf("Enter the time the money is invested for (in years): ");
    scanf("%f", &time);

    // Convert the annual interest rate from percentage to decimal
    rate = rate / 100;

    // Calculating Compound Interest
    amount = principal * pow((1 + rate / n), n * time);
    compoundInterest = amount - principal;

    // Output the results
    printf("The compound interest is: %.2f\n", compoundInterest);
    printf("The total amount after %.2f years is: %.2f\n", time, amount);

    return 0; // Indicate successful completion
}
