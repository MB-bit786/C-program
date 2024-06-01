#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Input the principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate the amount
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Output the results
    printf("The amount after %.2lf years is: %.2lf\n", time, amount);
    printf("The compound interest is: %.2lf\n", compoundInterest);

    return 0;
}
