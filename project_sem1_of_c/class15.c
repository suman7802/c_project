#include <stdio.h>
#include <string.h>
void fromLibrary(char *s) {
  printf("Length of the string (using standard library) is %lu \n", strlen(s));
  printf("Reverse of the string (using standard library) is %d \n", strrev(s));
}
int getLength(char *s) {
  int len = 0, i;
  for (i = 0; s[i] != '\0'; ++i)
    ;
  return i;
}
void getReverse(char *s) {
  char temp;
  int i;
  int length = getLength(s);
  for (i = 0; i <= length; i++) {
    temp = s[i];
    s[i] = s[length - i - 1];
    s[length - i - 1] = temp;
  }
  printf("Reverse of the string is %s", s);
}
int main() {
  char string[21];
  printf("Enter a string \n");
  fgets(string, 21, stdin);
  fromLibrary(string);
  printf("Length of string (using own function) is %d \n", getLength(string));
  getReverse(string);
}
