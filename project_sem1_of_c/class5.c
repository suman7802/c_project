#include <stdio.h>

int main() {
  float input1, input2;
  printf("Enter the first number: ");
  scanf("%f", &input1);
  printf("Enter the second number: ");
  scanf("%f", &input2);
  printf("The sum of %.2f %.2f is %.2f\n", input1, input2, input1 + input2);
  printf("The diference of %.2f %.2f is %.2f\n", input1, input2,
         input1 - input2);
  printf("The product of %.2f %.2f is %.2f\n", input1, input2, input1 * input2);
  printf("The quotient of %.2f %.2f is %.2f\n", input1, input2,
         input1 / input2);
  printf("The remainder of %.2f %.2f is %.2d\n", input1, input2,
         (int)input1 % (int)input2);
  return 0;
}