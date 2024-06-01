#include <stdio.h>

int main() {
    char character;
    int asciiValue;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Find the ASCII value of the character
    asciiValue = (int)character;

    // Display the ASCII value
    printf("The ASCII value of '%c' is: %d\n", character, asciiValue);

    return 0;
}
