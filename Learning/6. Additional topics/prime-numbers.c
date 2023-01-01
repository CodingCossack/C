//Prime Numbers Between 1 and 100

#include <stdio.h>
 
int primeCheck(int number) {
  for (int i = 2; i < number; ++i) {		//iteration from 2 to (number - 1) because prime number can only divide by 1 or itself
    if (number % i == 0) {
      return 0;
    }
  }
  return 1;
}
 
int main() {
 
  for (int i = 1; i <= 100; ++i) {
    int prime = primeCheck(i);
    if (prime) {
      printf("%d\n", i);
    }
  } 
  return 0;
}