// Program to find the power of a number.

#include <stdio.h>

int main() {

    int number;
    int power;

    scanf("%d %d", &number, &power);		// get input value for number and power

    int result = 1;							// variable to store the power of a number
    
    for(int i = 1; i <= power; i++) {		// run a loop from 1 to power
   
        result = number * result;			// inside loop multiply number with result
    } 

    printf("%d", result);					// print the result

    return 0;
}