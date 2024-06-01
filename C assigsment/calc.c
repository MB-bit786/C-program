/*
4. WAP to make simple calculator (operation include
Addition, Subtraction, Multiplication, Division, modulo)
using conditional statement
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter operation: ");
    scanf("%d", &c);
    if (c == 1)
    {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (c == 2)
    {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (c == 3)
    {
        printf("%d * %d = %d", a, b, a * b);
    }
    else if (c == 4)
    {
        printf("%d / %d = %d", a, b, a / b);
    }
    else if (c == 5)
    {
        printf("%d %% %d = %d", a, b, a % b);
    }
    return 0;
}
    