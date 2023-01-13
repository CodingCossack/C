// Program to print all numbers from 0 to 10 except the multiples of 3.

#include <stdio.h>

int main() {
    
    for (int i = 0; i <= 10; i++) {		// loop from 1 to 10
        if (i % 3 == 0) {				// inside loop check whether i is divisible by 3
            continue;
        }
        else {
            printf("%d\n", i);
        }
    }
 
    return 0;
}