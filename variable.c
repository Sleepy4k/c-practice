#include <stdio.h>

int main() {
  /*
  * For variables, you can use int, float, char, double, etc.
  * For example, int age = 10;
  * You can also declare multiple variables at once
  * For example, int age = 10, height = 72;
  */
  int age = 10;
  float weight = 120.5, height = 72.5;

  /*
  * For printing variables, you can use %d for int, %f for float, %c for char, %lf for double, etc.
  * For example, printf("Age: %d\n", age);
  * You can also print multiple variables at once
  * For example, printf("Age: %d\nWeight: %f\n", age, weight);
  * And double or float can be rounded to a specific decimal place
  * For example, printf("Weight: %.2f\n", weight); will print 120.50
  */
  printf("Age: %d\n", age);
  printf("Weight: %.1f and Height: %.1f\n", weight, height);

  /*
  * For changing variables, you can use = to assign a new value
  * For example, age = 20;
  * You can also change multiple variables at once
  * For example, age = 20, height = 75;
  * or maybe you want assing a new value to a variable that already has a value
  * For example, age = age + 10;
  */
  age = age + 10;
  weight = 130.5, height = 75.5;

  printf("Age: %d\n", age);
  printf("Weight: %.1f and Height: %.1f\n", weight, height);

  /*
  * You can declare a constant variable using const
  * For example, const int AGE = 10;
  * You can also declare multiple constant variables at once
  * For example, const int AGE = 10, HEIGHT = 72;
  * Remember that constant variables cannot be changed
  */
  const int AGE = 25;
  const float WEIGHT = 65.3, HEIGHT = 150.7;

  printf("Age: %d\n", AGE);
  printf("Weight: %.1f and Height: %.1f\n", WEIGHT, HEIGHT);

  /*
  * If you want to casting a variable, you can use (type)variable
  * For example, (int)weight will cast weight to an int
  * You can also cast multiple variables at once
  * For example, (int)weight, (int)height
  */
  int new_height, new_weight;
  new_height = (int)height;
  new_weight = (int)weight;

  printf("New Height: %d\n", new_height);
  printf("New Weight: %d\n", new_weight);

  return 0;
}