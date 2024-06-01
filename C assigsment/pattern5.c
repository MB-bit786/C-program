#include <stdio.h>

int main() {
  int rows, i, j;

  // Get the number of rows from the user
  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  // Print the pattern
  for (i = 1; i <= rows; i++) {
    // Print spaces before stars
    for (j = 1; j <= rows - i; j++) {
      printf("  ");
    }
    // Print stars
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("* ");
    }
    // Print a new line after each row
    printf("\n");
  }

  return 0;
}