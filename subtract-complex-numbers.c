// Subtract two complex numbers

#include <stdio.h>

typedef struct Complex {
    double real;
    double imag;
} complex;

int main() {

    complex c1, c2, result;

    scanf("%lf %lf ", &c1.real, &c1.imag);

    scanf("%lf %lf ", &c2.real, &c2.imag);

    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    
    printf("%.2lf + %.2lfi", result.real, result.imag);

    return 0;
}