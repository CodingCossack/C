// Program to print only the even numbers from an array.

#include <stdio.h>

int main() {

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int evenNumbers[10];
    
    // variable to track position of evenNumbers
    int j = 0;
    
    // run a for loop to access each element of numbers
    for (int i = 0; i < 10; ++i) {
            
        // check if ith element of number is even
        // if true, add the element to the jth position of evenNumbers
        // increase value of j by 1
        if (numbers[i] % 2 == 0) {
            evenNumbers[j] = numbers[i];
            j++;
        }
    }

    // run a for loop from 0 to j to print even numbers
    for (int i = 0; i < j; i++) {
        printf("%d\n", evenNumbers[i]);
    }
    
    return 0;
}