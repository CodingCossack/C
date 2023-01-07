// Program to print the greatest factor of a number besides itself using a loop.

#include <stdio.h>

int main() {
  
    int number;								// get input value for number
    scanf("%d", &number);
    
    for (int i = number - 1; i > 0; i--) {	// run the loop from number - 1 to 1
        
        if (number % i == 0) {				// check if number is divisible by i
            printf("%d", i);				// if true, print the value of i and break the loop
            break;		
        }
        
    }

    return 0;
}