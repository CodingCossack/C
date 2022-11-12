//Create a program to compute the factorial of a number using a function.


#include <stdio.h>

int computeFactorial(int n){
	int factorial = 1;

	for (int i = 0; i <= n; ++i){
		factorial = factorial * i;

	}

	return factorial;
}

int main() {

	int number;
	scanf("%d", &number);

	int total = computeFactorial(number);
	printf("%d", total);

	return 0;
	}
	
