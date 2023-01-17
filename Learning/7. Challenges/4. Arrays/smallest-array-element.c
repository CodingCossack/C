// Program to find the smallest element from an array.

#include <stdio.h>

int main() {

    // create an integer array of size 5
    int numbers[5];

    // get input value for the array
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // create a variable smallest and assign first element of numbers to it
    int smallest = numbers[0];

    // run a for loop from i = 1 to i < 5
    // check if smallest is less than element at i
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // print smallest 
    printf("%d", smallest);

    return 0;
}