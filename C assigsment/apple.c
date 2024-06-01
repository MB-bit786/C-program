#include <stdio.h>

int main() {
    int numberOfStudents, applesPerStudent = 5, totalApples;

    // Prompt the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Calculate the total number of apples required
    totalApples = numberOfStudents * applesPerStudent;

    // Display the total number of apples required
    printf("The total number of apples required is: %d\n", totalApples);

    return 0;
}
