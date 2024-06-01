#include <stdio.h>

int main() {
    double side, area;

    // Prompt user to enter the length of the side
    printf("Enter the length of the side of the square: ");
    scanf("%lf", &side);

    // Calculate the area
    area = side * side;

    // Display the result
    printf("Area of the square: %.2f\n", area);

    return 0;
}