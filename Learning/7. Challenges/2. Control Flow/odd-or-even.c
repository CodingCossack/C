// Program to check if a number is even or odd.

#include <stdio.h>


int main() {
    
    int number;					// create the number variable
    
    scanf("%d", &number);		// get input value for number
    
    if (number % 2 == 0) {		// check if the number is even or odd
        printf("Even");
    }
    
    else {
        printf("Odd");
    }
    
    return 0;
}