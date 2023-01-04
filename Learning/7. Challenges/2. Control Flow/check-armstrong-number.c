// Program to check if a number is armstrong or not.

#include <stdio.h>

int main() {
  
    int number;								// get input value for number	
    scanf("%d", &number);

    int originalNumber = number;			// assign the number to another variable originalNumber	

    int sum = 0;							// sum variable to store the sum of cubes
    int remainder;							// variable to access each digit of the number

    while (originalNumber != 0) {			// loop to find the cubes of each digit
        
        remainder = originalNumber % 10;					// use originalNumber % 10 to get the last digit
        sum = sum + (remainder * remainder * remainder);	// add the cube of the last digit to sum
        originalNumber = originalNumber / 10;				// use originalNumber / 10 to change the value of originalNumber
    }
    
    if (sum == number) {									// check if sum  is equal to number
        printf("Armstrong Number");
    }
    else {
        printf("Not an Armstrong Number");
    }

    return 0;
}