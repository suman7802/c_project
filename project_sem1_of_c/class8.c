/*
Score>=80, “Distinction”
Score from 70 to less than 80 “ First Division”
Score from 55 to less than 70 “ Second Division”
Sore from 40 to less than 55 “Third Division”
Score less than 40, “ Fail”
*/
#include <stdio.h>
int main() {
  float Score;
  printf("Enter your Score: ");
  scanf("%f", &Score);

  if (Score > 80 && Score <= 100) {
    printf("Distinction\n");
  } else if (Score > 70 && Score <= 80) {
    printf("First Division\n");
  } else if (Score > 55 && Score <= 70) {
    printf("Second Division\n");
  } else if (Score >= 40 && Score <= 55) {
    printf("Third Division\n");
  } else if (Score >= 0 && Score < 40) {
    printf("Fail\n");
  } else {
    printf("Invalid input!\n");
  }
  return 0;
}