//return struct from function

#include <stdio.h>
 
typedef struct Complex {
    double real;
    double imag;
} complex;
 
complex addNumbers(complex c1, complex c2) {
    complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
  return sum;
}
 
int main() {
 
    complex c1 = {.real = 1.4, .imag = 4.5};
    complex c2 = {.real = 5.4, .imag = -3.4};
    complex result;
 
    result = addNumbers(c1, c2);
    printf("Sum: %.2lf + %.2lfi", result.real, result.imag);
 
  return 0;
}