#include <stdio.h>
int main() {
  int column, num = 0;
  printf("Enter the value of column: ");
  scanf("%d", &column);
  for (int i = 1; i < column + 1; i++) {
    for (int j = 0; j < i; j++) {
      printf("%d ", num++);
    }
    printf("\n");
  }
  return 0;
}