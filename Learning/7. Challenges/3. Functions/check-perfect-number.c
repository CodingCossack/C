// Program to check if a number is a Perfect Number.

#include <stdio.h>

int findSum(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {		// run a for loop to find the sum of all divisors
        if (number % i == 0) {			  // if number perfectly divides
            sum = sum + i;				// add said number to sum
        }
    }

    return sum;
}

int main() {

    int number;				// ------------- get input value for number
    scanf("%d", &number); 

    int result = findSum(number);		  // call the findSum() function with argument number

    if (result == number) {				  // if result is equal to number, print Perfect Number
        printf("Perfect Number");
    }
    else {
        printf("Not a Perfect Number");	  // otherwise, print Not a Perfect Number.
    }
    
    return 0;
}