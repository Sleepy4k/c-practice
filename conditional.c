#include <stdio.h>

int main() {
  /*
  * You can use if statements to control the flow of your program
  */
  int x = 5;
  int y = 10;

  if (x < y) {
    printf("x is less than y\n");
  } else if (x > y) {
    printf("x is greater than y\n");
  } else {
    printf("x is equal to y\n");
  }

  /*
  * You can also use switch statements to control the flow of your program
  */
  int z = 5;

  switch (z) {
    case 1:
      printf("z is 1\n");
      break;
    case 2:
      printf("z is 2\n");
      break;
    case 3:
      printf("z is 3\n");
      break;
    case 4:
      printf("z is 4\n");
      break;
    case 5:
      printf("z is 5\n");
      break;
    default:
      printf("z is not 1, 2, 3, 4, or 5\n");
  }

  /*
  * You can also use the ternary operator to control the flow of your program
  */
  int a = 5;
  int b = 10;

  int c = (a < b) ? 1 : 0;

  return 0;
}