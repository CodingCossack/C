// Program to check if 3 values are internal angles of a triangle.

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c); 	// get 3 input values

    int sum = a + b + c;			// find the sum

    if (sum == 180) {				// check if sum is equal to 180 and print either true or false
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}