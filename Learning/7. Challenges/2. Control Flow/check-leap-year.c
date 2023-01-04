// Program to check if a year is a leap year or not.

#include <stdio.h>

int main() {

    int year;										// get input value for year
    scanf("%d", &year);

    if (year % 400 == 0) {							// check if year is divisible by 400
        printf("Leap Year");
    }
    else if (year % 4 == 0 && year % 100 != 0) {	// check if the year is divisible by 4 and doesn't end with 00
        printf("Leap Year");
    }
    else {											// otherwise print Not a Leap Year
        printf("Not a Leap Year");
    }

    return 0;
}