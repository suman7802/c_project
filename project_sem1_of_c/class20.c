#include <stdio.h>
int main() {
  FILE *fp;
  char str[60], filename[21];
  printf("Enter the filename to open for reading \n");
  scanf("%s", filename);
  fp = fopen(filename, "r");
  if (fp == NULL) {
    perror("Error opening file");
    return (-1);
  }
  if (fgets(str, 60, fp) != NULL) {
    puts(str);
  }
  fclose(fp);
  return (0);
}