#include <stdio.h>

int main() {
    float a, b, c, perimeter;

    // Prompt the user to enter the sides of the triangle
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    // Calculate the perimeter of the triangle
    perimeter = a + b + c;

    // Display the perimeter of the triangle
    printf("The perimeter of the triangle is: %.2f\n", perimeter);

    return 0;
}
