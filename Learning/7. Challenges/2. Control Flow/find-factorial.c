// Program to find the factorial of a number.

#include <stdio.h>

int main() {
  
    int number;

    scanf("%d", &number);					// get input value for number

    int factorial = 1;
   
    for (int i = 1; i <= number; i++) {		// run a for loop from i = 1 to i <= number
        factorial = factorial * i;			// inside loop multiply factorial with i
    }

    printf("%d", factorial);				// print factorial

    return 0;
}