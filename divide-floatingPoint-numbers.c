// Divide Two Floating Point Numbers

#include <stdio.h>

double* divideNumbers(double* n1, double* n2, double* result){
	*result = *n1 / *n2;
	return result;
}

int main(){
	double number1;
	double number2;
	scanf("%lf %lf", &number1, &number2);

	double result;

	double* value = divideNumbers(&number1, &number2, &result);
	printf("%.2lf", *value);

	return 0;

}