#include <stdio.h>

int main(void) {
  /*
  * You can point to a variable using the & operator
  */
  int x = 5;
  int* p = &x;

  /*
  * You can print the value of a variable using the * operator
  * But if you want to print the
  */
  printf("The value of x is %d\n", *p);
  printf("The value of p is %p\n", p);

  /*
  * You can change the value of a variable using the * operator
  */
  *p = 10;

  printf("The value of x is %d\n", *p);

  return 0;
}