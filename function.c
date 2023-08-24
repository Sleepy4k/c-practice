#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* This function returns a random number between max and min
*/
int random(int max, int min) {
  return rand() % max + min;
}

/*
* This function prints a random digit between 1 and 9
*/
int repeatDigit(int repetitions) {
  int digit = random(9, 1);

  for (int i = 0; i < repetitions; i++) {
    printf("%d ", digit);
  }

  printf("\n");
}

int main() {
  /*
  * This function seeds the random number generator
  */
  srand(time(NULL));

  /*
  * Init the max and min values and call the random function
  */
  int max = 10;
  int min = 1;
  int repetitions = random(max, min);

  /*
  * Call the repeatDigit function
  */
  repeatDigit(repetitions);
}