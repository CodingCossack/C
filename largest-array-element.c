// Print the largest element of the array

#include <stdio.h>

int main() {

  int numbers[5] = {55, 64, 75, 80, 65};

  int largest = numbers[0];

  for (int i = 1; i < 5; ++i) {
    if (largest < numbers[i]) {
      largest = numbers[i];
    }
  }

  printf("Largest: %d", largest);

  return 0;
}