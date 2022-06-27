#include <stdio.h>
int main() {
  int i, j, count, space, rows, k = 0;
  printf("Enter the size of triangle: ");
  scanf("%d", &count);
  for (i = 0; i <= count; i++) {
    for (j = 0; j < i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  printf("\n");
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 1; i <= rows; ++i, k = 0) {
    for (space = 1; space <= rows - i; ++space) {
      printf("  ");
    }
    while (k != 2 * i - 1) {
      printf("* ");
      ++k;
    }
    printf("\n");
  }
  return 0;
}