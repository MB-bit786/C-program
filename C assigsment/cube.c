#include <stdio.h>

int main() {
    double side, area;

    // Prompt user to enter the length of the side
    printf("Enter the length of the side of the cube: ");
    scanf("%lf", &side);

    // Calculate the area
    area = side * side *side;

    // Display the result
    printf("Area of the cube: %.2f\n", area);

    return 0;
}