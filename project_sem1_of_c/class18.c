#include <stdio.h>
void swap(int *first, int *second) {
  double temp;
  temp = *first;
  *first = *second;
  *second = temp;
}
int main() {
  int first, second, temp;
  printf("Enter first number: ");
  scanf("%id", &first);
  printf("Enter second number: ");
  scanf("%id", &second);
  swap(&first, &second);
  printf("\nAfter swapping, first number = %d\n", first);
  printf("After swapping, second number = %d\n", second);
  return 0;
}