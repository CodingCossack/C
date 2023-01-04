// Program to check if a number is an Abundant Number.

#include <stdio.h>

int main() {
    
    int number;								// get input for number
    scanf("%d", &number);

    int sum = 0;							// variable to store sum of all divisors

    for (int i = 1; i < number; ++i) {		// run loop to find the divisor of number
        
        if (number % i == 0) {				// check if i is divisor of number
   
            sum = sum + i;					// if true, add i to sum
        }
    }

    if (sum > number) {						// check if sum is greater than number
        printf("Abundant Number");
    } 
    else {
        printf("Not an Abundant Number");
    }
    
    return 0;
}