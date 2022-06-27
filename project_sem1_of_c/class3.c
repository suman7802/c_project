#include <stdio.h>
#define pi (float)22 / 7

int main() {
  float radius;
  printf("Enter the radius of circle: ");
  scanf("%f", &radius);
  // float area = pi * radius * radius, circumference = 2 * pi * radius;
  printf("The area of circle is %.2f unit sq\n", pi * radius * radius);
  printf("The circumference of circle is %.2f unit\n", 2 * pi * radius);
  return 0;
}