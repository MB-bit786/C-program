#include <stdio.h>

int main() {
    int asciiValue;
    char character;

    // Prompt the user to enter an ASCII value
    printf("Enter an ASCII value (0 to 127): ");
    scanf("%d", &asciiValue);

    // Ensure the ASCII value is within the valid range
    if (asciiValue < 0 || asciiValue > 127) {
        printf("Invalid ASCII value. Please enter a value between 0 and 127.\n");
    } else {
        // Convert ASCII value to corresponding character
        character = (char)asciiValue;

        // Display the corresponding character
        printf("The character corresponding to ASCII value %d is: '%c'\n", asciiValue, character);
    }

    return 0;
}
