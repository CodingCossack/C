// Program to find the sum of all the user inputs until the user enters 0.

#include <stdio.h>

int main() {

    int sum = 0;
    int number;

    while (1) {							// run a while loop that breaks only if input value is 0
        								// if input value is other than 0, add it to sum
        scanf("%d", &number);
            
            if (number == 0) {
                break;
            }
            else {
                sum = sum + number;
            }
    }

    printf("%d", sum);					// print the sum

    return 0;
}