#include <stdio.h>

int main() {
    float breath,height, area;

    // Prompt user to enter the length of the side
     printf("Enter the breath of the side of the triangle: ");
    scanf("%lf", &breath);
     printf("Enter the height of the side of the triangle: ");
    scanf("%lf", &height);

    // Calculate the area
    area = 0.5 * breath*height;

    // Display the result
    printf("Area of the square: %.2f\n", area);

    return 0;
}