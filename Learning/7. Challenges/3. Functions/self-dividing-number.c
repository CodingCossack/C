// Program to check if a number is a self-dividing number.

#include <stdio.h>

int checkSelfDivide(int number) {
    int num = number;
    int digit;

    while (num !=0) {
        
        digit = num % 10;		// --- access each digit of num
        
        if (num % digit != 0) {		// check if any digit doesn't divide the number
            return 0;			 // -- return 0, if true
        }
        
        num = num / 10;			// --- change the value of num by using num / 10
        
    }
    
    return 1;			// ----------- if all digit divides the number

}

int main() {

    int number;

    scanf("%d", &number); 					// get input value for number

    int result = checkSelfDivide(number);	// call checkSelfDivide() function

    if (result == 1) {						// check the returned value is 1
        printf("Self Dividing Number");	
    }
    else {
        printf("Not a Self Dividing Number");
    }

    return 0;
}