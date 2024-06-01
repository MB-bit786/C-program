/*2. WAP of Addition, Subtraction, Multiplication and Division
using Switch case.(Must Be Menu Driven)*/

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        d = a + b;
        printf("%d + %d = %d", a, b, d);
        break;
    case 2:
        d = a - b;
        printf("%d - %d = %d", a, b, d);
        break;
    case 3:
        d = a * b;
        printf("%d * %d = %d", a, b, d);
        break;
    case 4:
        d = a / b;
        printf("%d / %d = %d", a, b, d);
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}