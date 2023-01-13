// Program to print a multiplication table of a number.

#include <stdio.h>

int main() {
     
    int number;													// create a number variable

    scanf("%d", &number);										// take input value for number
  
    int count = 1;												// use while loop to run from 1 to 10
    while (count <= 10) {										// print multiplication table inside the while loop
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product);
        count = count + 1;
    }
  
    return 0;
}