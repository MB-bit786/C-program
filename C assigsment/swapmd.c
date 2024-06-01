#include <stdio.h>

int main() {
    double a, b;

    // Input the two numbers
    printf("Enter the first number (a): ");
    scanf("%lf", &a);
    printf("Enter the second number (b): ");
    scanf("%lf", &b);

    // Print the numbers before swapping
    printf("Before swapping:\n");
    printf("a = %.2lf\n", b);
    printf("b = %.2lf\n", a);

    // Swap using multiplication and division
    a = a * b; // Step 1: a now holds the product of a and b
    b = a / b; // Step 2: b now holds the original value of a
    a = a / b; // Step 3: a now holds the original value of b

    // Print the numbers after swapping
    printf("After swapping:\n");
    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);

    return 0;
}
