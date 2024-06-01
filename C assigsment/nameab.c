#include <stdio.h>
#include <ctype.h>

int main() {
    char countryName[100], abbreviation[100];
    int i = 0, j = 0;

    // Prompt the user to enter the name of the country
    printf("Enter the name of the country: ");
    fgets(countryName, sizeof(countryName), stdin);

    // Convert the country's name to an abbreviated form
    while (countryName[i] != '\0') {
        // Check if the current character is the start of a word
        if (i == 0 || (countryName[i - 1] == ' ' && countryName[i] != ' ')) {
            // Convert to uppercase if the character is a lowercase letter
            if (islower(countryName[i])) {
                abbreviation[j++] = toupper(countryName[i]);
            } else {
                abbreviation[j++] = countryName[i];
            }
        }
        i++;
    }

    // Null-terminate the abbreviation string
    abbreviation[j] = '\0';

    // Display the abbreviation
    printf("The abbreviated form of the country's name is: %s\n", abbreviation);

    return 0;
}
