#include <stdio.h>

int main() {
    int n = 5; // Number of lines in the pattern

    // Loop through each line
    for (int i = 1; i <= n; i++) {
        // Loop through each character in the line
        for (int j = 1; j <= i; j++) {
            // Print 1 if the position is odd, 0 if the position is even
            if (j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
