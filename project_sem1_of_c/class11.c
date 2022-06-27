#include <stdio.h>
int main() {
  int num, num1, num2, i = 1, j = 1, k = 1, l = 1, m = 1, n = 1;
  unsigned long long fact1 = 1, fact2 = 1, fact3 = 1, t_pow1 = 1, t_pow2 = 1,
                     t_pow3 = 1;
  printf("Enter an integer for factorial: ");
  scanf("%d", &num);
  if (num < 0)
    printf("Error! Factorial of a negative number doesn't exist.\n");
  else {
    for (i = 1; i <= num; ++i) {
      fact1 *= i;
    }
    while (j <= num) {
      fact2 *= j;
      j++;
    }
    do {
      fact3 *= k;
      k++;
    } while (k <= num);
    printf("Factorial of %d = %llu from for_loop\n", num, fact1);
    printf("Factorial of %d = %llu from while_loop\n", num, fact2);
    printf("Factorial of %d = %llu from do_while_loop\n", num, fact3);
  }
  /* from here we get power */
  printf("Enter an integer for power: ");
  scanf("%d", &num1);
  printf("Enter an integer for t_pow: ");
  scanf("%d", &num2);
  if (num2 < 0)
    printf("Error! Negetive power dected.\n");
  else {
    for (l = 1; l <= num2; ++l) {
      t_pow1 *= num1;
    }
    while (m <= num2) {
      t_pow2 *= num1;
      m++;
    }
    do {
      t_pow3 *= num1;
      n++;
    } while (n <= num2);
    printf("Power of %d = %llu from for_loop\n", num1, t_pow1);
    printf("Power of %d = %llu from while_loop\n", num1, t_pow2);
    printf("Power of %d = %llu from do_while_loop\n", num1, t_pow3);
  }
  return 0;
}