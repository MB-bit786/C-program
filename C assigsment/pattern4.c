#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
