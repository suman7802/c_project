#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *file, *fp;
  char name[21], str[60];
  char ch;
  int characters, words, lines;
  /* Input name of files to merge to third file */
  printf("Enter source file name: ");
  scanf("%s", name);
  /* Open source files in 'r' mode */
  file = fopen(name, "r");
  /* Check if file opened successfully */
  if (file == NULL) {
    printf("\nUnable to open file.\n");
    printf("Please check if file exists and you have read privilege.\n");
    exit(EXIT_FAILURE);
  }
  /* printing the text */
  fp = fopen(name, "r");
  if (fp == NULL) {
    perror("Error opening file");
    return (-1);
  }
  if (fgets(str, 60, fp) != NULL) {
    printf("\nText of %s: ", name);
    puts(str);
  }
  /* Logic to count characters, words and lines. */
  characters = words = lines = 0;
  while ((ch = fgetc(file)) != EOF) {
    characters++;
    /* Check new line */
    if (ch == '\n' || ch == '\0')
      lines++;
    /* Check words */
    if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
      words++;
  }
  if (characters > 0) {
    words++;
    lines++;
  }
  printf("Total characters = %d\n", characters);
  printf("Total words      = %d\n", words);
  printf("Total lines      = %d\n", lines);
  fclose(file);
  return 0;
}