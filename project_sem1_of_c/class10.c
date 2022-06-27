#include <stdio.h>
int main() {
  int final;
  printf("Enter the last number: ");
  scanf("%d", &final);
  for (int i = 1; i <= final; i++) {
    for (int j = 1; j <= 10; j++) {
      printf("%d X %d = %d\n", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}