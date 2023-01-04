// Program to check if a number is negative or not.

#include <stdio.h>


int main() {
  
    int number;							// create a variable and get input value
    scanf("%d", &number);
    
    if (number < 0) {					// check if the number is negative or positive or zero
        printf("Negative Number");
    }
    
    else if (number > 0) {
        printf("Positive Number");
    }
    
    else {
        printf("Zero Number");
    }
    
    return 0;
}