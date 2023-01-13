// Program to display armstrong numbers between two intervals.

#include <stdio.h>

int checkArmstrong(int number) {	// -------- function that checks if a number is armstrong
    
    int originalNumber = number;	// -------- assign the number to another variable originalNumber	
    int sum = 0;					// -------- sum variable to store the sum of cubes
    int remainder;					// -------- variable to access each digit of the number
    
    while (originalNumber != 0) {							// loop to find the cubes of each digit
        remainder = originalNumber % 10;					// use originalNumber % 10 to get the last digit
        sum = sum + (remainder * remainder * remainder);	// add the cube of the last digit to sum
        originalNumber = originalNumber / 10;				// use originalNumber / 10 to change the value of originalNumber
    }
    if (sum == number) {
        printf("%d\n", sum);	// ------------- prints the number if it is an armstrong number
    }
}

int main() {
  
    int x, y;				// ---------------- get input values for x and y
    scanf("%d %d", &x, &y);

    while (x <= y) {			// ------------ run loop from x to y
        checkArmstrong(x);			// -------- call checkArmstrong() for each value from x
        x = x + 1;
    }
    
    return 0;
}