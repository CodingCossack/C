// Program to check if a number is palindrome or not.

#include <stdio.h>

int findReverse(int number) {		// function to find the reverse number
    int reversed = 0;
    int remainder;

    while (number != 0) {			// ----------- run a while loop until number is equal to 0
        remainder = number % 10;		// ------- use originalNumber % 10 to get the last digit	
        number = number / 10;		   // -------- use originalNumber / 10 to change the value of originalNumber
        reversed = reversed * 10 + remainder;	// re-arranges number back to front
    }

    return reversed;
}

int main() {
    
    int number;

    scanf("%d", &number); 					// get input value for number

    int result = findReverse(number);		// call findReverse() with argument number

    if (number == result) {				// --- check if number is equal to the returned value
        printf("Palindrome Number");
    }
    else {
        printf("Not a Palindrome Number");
    }

    return 0;
}