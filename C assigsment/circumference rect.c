#include <stdio.h>

int main() {
    float width, length, perimeter;

    // Prompt the user to enter the width of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Prompt the user to enter the length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Calculate the perimeter of the rectangle
    perimeter = 2 * (width + length);

    // Display the perimeter of the rectangle
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
