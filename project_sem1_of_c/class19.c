#include <stdio.h>
#include <string.h>
struct student {
  char name[21];
  int roll_no;
  float ph_no;
  char address[21];
};
int main() {
  int count;
  struct student std1;
  printf("Student amount: ");
  scanf("%d", &count);
  struct student std[count];
  for (int i = 0; i < count; i++) {
    printf("Enter the Name of student no %d: ", i + 1);
    fflush(stdin);
    fgets(std[i].name, 21, stdin);
    printf("Enter the roll_no of %d: ", i + 1);
    scanf("%d", &std[i].roll_no);
    printf("Enter the Phone_no of %d: ", i + 1);
    scanf("%f", &std[i].ph_no);
    printf("Enter the Address of student no %d: ", i + 1);
    fflush(stdin);
    fgets(std[i].address, 21, stdin);
  }
  printf("\n");
  for (int i = 0; i < count; i++) {
    printf("The Name of student no %d is %s", i + 1, std[i].name);
    printf("The roll_no of %d %d\n", i + 1, std[i].roll_no);
    printf("The Phone_no of %d %f\n", i + 1, std[i].ph_no);
    printf("The Address of student no %d is %s\n", i + 1, std[i].address);
  }
  return 0;
}