#include <stdio.h>
#include <stdlib.h>
int main() {
  int m, n, *ptr;
  printf("How many element_1 you have to regester: ");
  scanf("%d", &n);
  ptr = (int *)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++) {
    printf("Enter the value of %d element_1: ", i + 1);
    scanf("%d", &ptr[i]);
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("The value of %d element_1 is: %d\n", i + 1, ptr[i]);
  }
  printf("How many element_2 you have to add for regester_2: ");
  scanf("%d", &m);
  ptr = realloc(ptr, (m + n) * sizeof(int));
  for (int i = n; i < (m + n); i++) {
    printf("Enter the value of %d element_2: ", i + 1);
    scanf("%d", &ptr[i]);
  }
  printf("\n");
  for (int i = 0; i < (m + n); i++) {
    printf("The value of %d element_2 is: %d\n", i + 1, ptr[i]);
  }
  free(ptr);
  return 0;
}