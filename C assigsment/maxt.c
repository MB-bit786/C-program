/*2. WAP to find maximum number among 3 numbers using
ternary operator*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Maximum number is: %d", (a > b) ? (a > c ? a : c) : (b > c ? b : c));
    return 0;
}
