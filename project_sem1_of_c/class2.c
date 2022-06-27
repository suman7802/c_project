#include <stdio.h>

int main() {
  printf("size of char: %lu\n", sizeof(char));
  printf("size of short signed char: %lu\n", sizeof(signed char));
  printf("size of short unsigned char: %lu\n", sizeof(unsigned char));
  printf("size of short int: %lu\n", sizeof(short int));
  printf("size of short unsigned int: %lu\n", sizeof(short unsigned int));
  printf("size of int: %lu\n", sizeof(int));
  printf("size of float: %lu\n", sizeof(float));
  printf("size of short long int: %lu\n", sizeof(long int));
  printf("size of short unsigned long int: %lu\n", sizeof(unsigned long int));
  printf("size of short long long int: %lu\n", sizeof(long long int));
  printf("size of double: %lu\n", sizeof(double));
  printf("size of short unsigned long long int: %lu\n",
         sizeof(unsigned long long int));
  printf("size of short long double: %lu\n", sizeof(long double));
  return 0;
}