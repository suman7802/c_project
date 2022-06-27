#include <stdio.h>
void odd_even(int n) {
  if (n % 2 == 0) {
    printf("and even\n");
  } else {
    printf("and odd\n");
  }
}
int main() {
  int input;
  printf("Enter the number: ");
  scanf("%d", &input);
  if (input < 0) {
    printf("Given integer is negative ");
    odd_even(input);
  } else {
    printf("Given integer is positive ");
    odd_even(input);
  }
  return 0;
}