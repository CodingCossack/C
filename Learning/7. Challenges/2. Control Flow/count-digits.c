// Program to count the number of digits in an integer.

#include <stdio.h>

int main() {
  
    int number;
    int count = 0;

    scanf("%d", &number);		// get input value for number

    while (number != 0) {		// loop through the integer to calculate the number of digits
        count = count + 1;
        number = number / 10;
    }

    printf("%d", count);		// print the number of digits
    
    return 0;
}