// Program to find LCM (Lowest Common Multiple) of two numbers using a function.

#include <stdio.h>

int findLCM(int num1, int num2) {			// create function findLCM() with parameters num1 and num2
    
    int lcm;								// compute lcm of two values and return it
    
    if (num1 >= num2) {
        lcm = num1;
    }
    else {
        lcm = num2;
    }
    
    while (1) {
        lcm = lcm + 1;
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }
    return lcm;
}

int main() {
  
    int x, y;					// get input value for x and y
    scanf("%d %d", &x, &y);

    int lcm = findLCM(x, y);	// call findLCM() with arguments x and y

    printf("%d", lcm);			// print the returned value
    
    return 0;
}