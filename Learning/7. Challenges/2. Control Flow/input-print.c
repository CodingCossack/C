// Program to print FizzBuzz based on user input.

#include <stdio.h>

int main() {

    int number;									// get input value of number
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {	// check if number is multiple of both 3 and 5
        printf("FizzBuzz");
    }
    else if (number % 3 == 0) {					// check if number is multiple of 3
        printf("Fizz");
    }
    else if (number % 5 == 0) {					// check if number is multiple of 5
        printf("Buzz");
    }
    else {										// else print the value of number
        printf("%d", number);
    }

    return 0;
}