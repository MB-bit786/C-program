/*Write a C program to check whether a triangle can be formed
with the given values for the angles.*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
    {
        printf("The triangle can be formed");
    }
    else
    {
        printf("The triangle cannot be formed");
    }
    return 0;
}
