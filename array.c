#include <stdio.h>

int main() {
  /*
  * You can make single dimensional arrays
  */
  int arr1[5] = {1, 2, 3, 4, 5};

  /*
  * You can make multi dimensional arrays
  */
  int arr2[2][2] = {
    {1, 2},
    {3, 4}
  };

  /*
  * You can access elements in arrays
  */
  int x = arr1[0];
  int y = arr2[0][0];

  /*
  * You can change elements in arrays
  */
  arr1[0] = 10;
  arr2[0][0] = 10;

  /*
  * You can get the length of an array
  */
  int len1 = sizeof(arr1) / sizeof(arr1[0]);
  int len2 = sizeof(arr2) / sizeof(arr2[0]);

  /*
  * You can loop through arrays
  */
  for (int i = 0; i < len1; i++) {
    printf("arr1[%d] is %d\n", i, arr1[i]);
  }

  for (int i = 0; i < len2; i++) {
    for (int j = 0; j < len2; j++) {
      printf("arr2[%d][%d] is %d\n", i, j, arr2[i][j]);
    }
  }

  return 0;
}