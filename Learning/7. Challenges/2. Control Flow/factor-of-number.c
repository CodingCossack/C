// Program to find the factors of a number.
#include <stdio.h>

int main() {

    int number;								// get input value for number
    scanf("%d", &number);

    for (int i = 1; i < number; i++) {		// run a loop from i = 1 to i < number
    
        if(number % i == 0) {				// check if number is divisible by i
          printf("%d\n", i); 
        }
    }

    return 0;
}