//add two complex numbers

#include <stdio.h>
 
typedef struct Complex {
  double real;
  double imag;
} complex;
 
int main() {
 
  complex c1 = {.real = 1.2, .imag = 1.4};
  complex c2 = {.real = 2.9, .imag = 2.3};
  complex result;
 
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;
 
  printf("Result: %.2lf + %.2lfi", result.real, result.imag);
 
  return 0;
}