#include <stdio.h>

int main(void)
{
  /*
  * If you want to use the operator, you can use the following operators.
  * +, -, *, /, %, ++, --
  * For example, if you want to add two numbers, you can use the + operator.
  * If you want to subtract two numbers, you can use the - operator.
  * If you want to multiply two numbers, you can use the * operator.
  * If you want to divide two numbers, you can use the / operator.
  * If you want to get the remainder of two numbers, you can use the % operator.
  * If you want to increase the value of a variable by 1, you can use the ++ operator.
  * If you want to decrease the value of a variable by 1, you can use the -- operator.
  */
  int a = 10;
  int b = 3;
  int c = 0;

  c = a + b;
  printf("a + b = %d\n", c);

  c = a - b;
  printf("a - b = %d\n", c);

  c = a * b;
  printf("a * b = %d\n", c);

  c = a / b;
  printf("a / b = %d\n", c);

  c = a % b;
  printf("a %% b = %d\n", c);

  c = a++;
  printf("a++ = %d\n", c);

  c = a--;
  printf("a-- = %d\n", c);

  return 0;
}