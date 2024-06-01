/*Accept the input month number and print number of
days in that month.*/

#include <stdio.h>

int main() {
    int month;
    int days;

    // Input the month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Determine the number of days in the month
    switch(month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            days = 28; // Considering a common year, not accounting for leap years
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1; // Exit the program with an error code
    }

    // Output the number of days in the month
    printf("Number of days in month %d: %d\n", month, days);

    return 0;
}
