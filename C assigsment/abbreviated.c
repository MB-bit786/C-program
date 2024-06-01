#include <stdio.h>
#include <ctype.h>

int main() {
    char schoolName[100], abbreviation[100];
    int i = 0, j = 0;

    // Prompt the user to enter the name of the school
    printf("Enter the name of the school: ");
    fgets(schoolName, sizeof(schoolName), stdin);

    // Convert the school name to an abbreviated form
    while (schoolName[i] != '\0') {
        // Check if the current character is the start of a word
        if (i == 0 || (schoolName[i - 1] == ' ' && schoolName[i] != ' ')) {
            // Convert to uppercase if the character is a lowercase letter
            if (islower(schoolName[i])) {
                abbreviation[j++] = toupper(schoolName[i]);
            } else {
                abbreviation[j++] = schoolName[i];
            }
        }
        i++;
    }

    // Null-terminate the abbreviation string
    abbreviation[j] = '\0';

    // Display the abbreviation
    printf("The abbreviated form of the school's name is: %s\n", abbreviation);

    return 0;
}
