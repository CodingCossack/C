// Program to find the greatest multiple of a number below 100.

#include <stdio.h>

int main() {

    int number;							// get input value for number
    scanf("%d", &number);

    for (int i = 100; i >= 1; i--) {	// run a loop from i = 100 to 1

        if (i % number == 0) {			// check if i is divisible by number
            printf("%d", i);			// if yes, print i and exit loop
            break;			
        }
    }

    return 0;
}