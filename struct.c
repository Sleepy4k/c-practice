#include <stdio.h>

/*
* This is example for creating a struct outside a function
*/
struct Table {
  int height;
  int width;
  char color[20];
};

/*
* This is example for implement custom function for changing the value of a field
*/
struct Table increaseArea(struct Table table, int height, int width) {
  table.height += height;
  table.width += width;

  return table;
};

int main() {
  /*
  * You can define a struct using the struct keyword
  * You can define a struct inside a function or outside a function
  */
  struct Person {
    char firstName[25];
    char lastName[40];
    int age;
  };

  /*
  * After you define a struct, you can create a variable of that type
  */
  struct Person person1 = {"John", "Doe"};
  struct Person person2 = {"Jane", "Doe"};

  /*
  * You can access the fields of a struct using the . operator
  * If you want to init value or change value of a field, you can use the = operator
  */
  person1.age = 20;
  person2.age = 30;

  /*
  * You can print the value of a field using the . operator
  */
  printf("Person 1: %s %s, %d\n", person1.firstName, person1.lastName, person1.age);
  printf("Person 2: %s %s, %d\n", person2.firstName, person2.lastName, person2.age);

  /*
  * Also, you can create a pointer to a struct
  */
  struct Person* person1Pointer = &person1;
  struct Person* person2Pointer = &person2;

  /*
  * You can access the fields of a struct using the -> operator
  * If you want to init value or change value of a field, you can use the = operator
  */
  (*person1Pointer).age += 20;
  person2Pointer->age = 50;

  /*
  * You can print the value of a field using the -> operator
  */
  printf("Person 1: %s %s, %d\n", person1Pointer->firstName, person1Pointer->lastName, person1Pointer->age);
  printf("Person 2: %s %s, %d\n", person2Pointer->firstName, person2Pointer->lastName, person2Pointer->age);

  /*
  * You can change the value of a field using custom functions
  */
  struct Table table = {10, 20, "red"};
  table = increaseArea(table, 10, 20);

  printf("Table: %d %d %s\n", table.height, table.width, table.color);
}