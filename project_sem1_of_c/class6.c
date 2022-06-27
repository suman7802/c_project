#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, ansA, ansB;
  printf("Enter the value of a: ");
  scanf("%f", &a);
  printf("Enter the value of b: ");
  scanf("%f", &b);
  printf("Enter the value of c: ");
  scanf("%f", &c);
  ansA = (-b + pow(b * b - 4 * a * c, 1 / 2));
  ansB = (-b - pow(b * b - 4 * a * c, 1 / 2));
  printf("The value of x is %.2f and %.2f\n", ansA, ansB);
  return 0;
}