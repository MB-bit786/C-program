#include <stdio.h>
#define PI 3.14159

int main() {
    double radius, area, circumference;

    // Prompt user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Calculate circumference
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
