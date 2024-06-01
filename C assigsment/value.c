#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("Choose an operation to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulo (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Get input numbers for operations except modulo which uses integers
    if (choice != 5) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    } else {
        int intNum1, intNum2;
        printf("Enter two integers: ");
        scanf("%d %d", &intNum1, &intNum2);
        num1 = intNum1;
        num2 = intNum2;
    }

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
