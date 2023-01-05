// Program to check whether a number is prime or not.

#include <stdio.h>

int main() {

    int number;								// get input value for number
    scanf("%d", &number);

    int flag = 0;							// create flag variable with value 0

        for (int i = 2; i < number; i++) {	// run loop from 2 to number - 1
            if (number % i == 0) {			// check if number is divisible by number between 2 to number - 1
                flag = 1;
                break;
            }
            else {
                flag = 0;
            }
        }
    
    
    if (flag == 1) {						// check if flag is 1 and print either Not a Prime Number or Prime Number
        printf("Not a Prime Number");
    }
    else {
        printf("Prime Number");
    }
    
    return 0;
}