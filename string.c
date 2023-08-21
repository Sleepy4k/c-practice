#include <stdio.h>

int main() {
  /*
  * You can create strings
  */
  char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char str2[] = "Hello";

  /*
  * You can access elements in strings
  */
  char x = str1[0];
  char y = str2[0];

  /*
  * You can change elements in strings
  */
  str1[0] = 'Y';
  str2[0] = 'Y';

  /*
  * You can get the length of strings
  */
  int len1 = sizeof(str1) / sizeof(str1[0]);
  int len2 = sizeof(str2) / sizeof(str2[0]);

  /*
  * You can loop through strings
  */
  for (int i = 0; i < len1; i++) {
    printf("str1[%d] is %c\n", i, str1[i]);
  }

  for (int i = 0; i < len2; i++) {
    printf("str2[%d] is %c\n", i, str2[i]);
  }

  return 0;
}