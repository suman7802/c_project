#include <stdio.h>
int main() {
  int matrix1[3][3], matrix2[3][3], matrix_sum[3][3], matrix_product[3][3],
      temp_sum;               // declearaton
  for (int i = 0; i < 3; i++) // taking inputs for matrix1
  {
    for (int j = 0; j < 3; j++) {
      printf("Enter the value of matrix1 %d %d: ", i + 1, j + 1);
      scanf("%d", &matrix1[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) // taking inputs for matrix2
  {
    for (int j = 0; j < 3; j++) {
      printf("Enter the value of matrix2 %d %d: ", i + 1, j + 1);
      scanf("%d", &matrix2[i][j]);
    }
  }
  printf("\nThe product of matrix1 & matrix2:\n"); // printing the product of
                                                   // matrix1 and matrix2
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      temp_sum = 0;
      for (int k = 0; k < 3; k++) {
        temp_sum += matrix1[i][k] * matrix2[k][j];
      }
      printf("%d ", temp_sum);
    }
    printf("\n");
  }
  printf("\nThe sum of matrix1 & matrix2:\n"); // printing the product of
                                               // matrix1 and matrix2
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix_sum[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
