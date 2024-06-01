#include <stdio.h>

int main() {
  int n, i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  // Print numbers in a triangle shape
  for (i = 1; i <= n; i++) {
    // Print spaces before numbers
    for (j = 1; j <= n - i; j++) {
      printf("  ");
    }
    // Print numbers in a row
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  
  // Print letters in a triangle shape
  for (i = 1; i <= n; i++) {
    // Print spaces before letters
    for (j = 1; j <= n - i; j++) {
      printf("  ");
    }
    // Print letters in a row
    for (j = 1; j <= i; j++) {
      printf("%c ", 'A' + j - 1);
    }
    printf("\n");
  }
  return 0;
}