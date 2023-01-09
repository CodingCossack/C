// Program to check if a number is a Harshad Number.

#include <stdio.h>

int main() {
    
    int number;								// get input for number
    scanf("%d", &number);
    
    int sum = 0;							// variable to store the sum of digits

    int num = number;						// use loop to access each digit and find sum of digits
    while (num != 0) {
        	
        int digit = num % 10;				// access each digit using num % 10
        	
        sum = sum + digit;					// add each digit to sum
        	 
        num = num / 10;						// change value of num
  	}
    if (number % sum == 0) {				// check if number is perfectly divided by sum
        printf("Harshad Number");
    }
    else {
        printf("Not a Harshad Number");
    }
    
    return 0;
}