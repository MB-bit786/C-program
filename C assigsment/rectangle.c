#include <stdio.h>

int main() {
    float width, length, area;

    // Prompt the user to enter the width of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Prompt the user to enter the length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Calculate the area of the rectangle
    area = width * length;

    // Display the area of the rectangle
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
