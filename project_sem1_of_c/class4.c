#include <stdio.h>
int main() {
  int temp, temp2, days, year, month, week, day;
  printf("Enter the days to convert into Y/M/D: ");
  scanf("%d", &days);
  year = days / 360;
  temp = days % 360;
  month = temp / 30;
  temp2 = days % 30;
  week = temp2 / 7;
  day = days % 7;
  if (year > 0) {
    printf("year: %d\n", year);
  }
  if (year > 0) {
    printf("month %d\n", month);
  }
  if (year > 0) {
    printf("week %d\n", week);
  }
  if (year > 0) {
    printf("day %d\n", day);
  }
  return 0;
}