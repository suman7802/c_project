#include <stdio.h>
int main() {
  int num1, num2, result;
  char operator;
  printf("Enter any one operator +, -, *, ,/, %%\n");
  scanf("%c", &operator);
  printf("Enter two numbers \n");
  scanf("%d %d", &num1, &num2);
  switch (operator) {
  case '+':
    result = num1 + num2;
    printf("The sum is %d\n", result);
    break;
  case '-':
    result = num1 - num2;
    printf("The difference is %d\n", result);
    break;
  case '*':
    result = num1 * num2;
    printf("The product is %d\n", result);
    break;
  case '/':
    result = num1 / num2;
    printf(" The quotient is %d\n", result);
    break;
  case '%':
    result = num1 % num2;
    printf("The remainder is %d\n", result);
    break;
  default:
    printf(" Invalid operator entered\n");
  }
  return 0;
}