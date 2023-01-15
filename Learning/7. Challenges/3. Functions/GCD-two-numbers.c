// Program to compute the area of a circle using a function.
#include <stdio.h>

int findGCD(int num1, int num2) {					// create function findGCD with parameters: num1 and num2
    
    int gcd = 1;									// compute the gcd of two numbers and return it
    
    for (int i = num1; i >= 1; i--) {
            for (int i = num2; i >= 1; i--) {  
                if (num1 % i == 0 && num2 % i == 0) {
                    
                    gcd = i;
                    
                    return gcd;
                }
            }
        }
}

int main() {
  
    int x, y;					// get input values for x and y
    scanf("%d %d", &x, &y);

    int gcd = findGCD(x, y);	// call findGCD() with arguments x and y

    printf("%d", gcd);			// print the returned value
    
    return 0;
}