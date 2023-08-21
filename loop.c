#include <stdio.h>

int main() {
  /*
  * You can use while loops to control the flow of your program
  */
  int x = 0;

  while (x < 10) {
    printf("x is %d\n", x);
    x++;
  }

  /*
  * You can also use for loops to control the flow of your program
  */
  for (int i = 0; i < 10; i++) {
    printf("i is %d\n", i);
  }

  /*
  * You can also use do while loops to control the flow of your program
  */
  int y = 0;

  do {
    printf("y is %d\n", y);
    y++;
  } while (y < 10);

  /*
  * You can also use break statements to control the flow of your program
  */
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      break;
    }

    printf("i is %d\n", i);
  }

  /*
  * You can also use continue statements to control the flow of your program
  */
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      continue;
    }

    printf("i is %d\n", i);
  }

  return 0;
}