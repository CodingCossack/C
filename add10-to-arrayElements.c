// Add 10 to each element of array

#include <stdio.h>

int main() {

  int numbers[4] = {8, 7, 21, 13};

  for (int i = 0; i < 4; ++i) {
    *(numbers + i) = *(numbers + i) + 10;
  }

  printf("Array Elements: ");
  for (int i = 0; i < 4; ++i) {
    printf("%d ", *(numbers + i));
  }

  return 0;
}