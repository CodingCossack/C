// Program to find the sum of N natural numbers.

#include <stdio.h>

int main() {

    int n;								// create a variable n
    
    int sum = 0;						// variable to store the value of sum
    
    scanf("%d", &n);					// take input value for n
    
    for (int i = 1; i <= n; ++i) {		// loop runs from 1 to n
        sum = i + sum;					// add i to sum
    }
    
    printf("%d", sum);					// print the value of sum
    
    return 0;
}