// Program to find all the prime numbers between two intervals using a function.

#include <stdio.h>

int isPrime (int number) {	// ----------- create a function that checks if a number is prime or not
    
    int flag = 0;	// ------------------- create flag variable with value 0

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {		// --- run loop from 2 to number - 1
            flag = 1;			// ------- check if number is divisible by number between 2 to number - 1
            break;
        }
        else {
            flag = 0;
        }
    }
    if (flag == 0) {			// ------- check if flag is 0 which is condition isolated for prime number
        printf("%d\n", number);		// --- print prime number and add new line
    }
}

int main() {
    
    int x, y;
    scanf("%d %d", &x, &y);
    
    for (int i = x; i <= y; ++i) {		// run the loop from x to y
        isPrime(i);						// for each iteration of loop call isPrime()
    }
    
    return 0;
}