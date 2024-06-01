#include <stdio.h>

int main() {
    float side, circumference;

    // Prompt the user to enter the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate the circumference of the square
    circumference = 4 * side;

    // Display the circumference of the square
    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}
