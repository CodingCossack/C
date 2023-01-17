// Program to multiply each element of an array by 10.

#include <stdio.h>

int main() {

    // create an array
    int arr[5] = {1, 2, 3, 4, 5};

    // create another array with the same size
    int arrCopy[5];

    // multiply elements of first array by 10 and store them in second array
    for (int i = 0; i < 5; i++) {
        arrCopy[i] = 10 * arr[i];
    }

    // print second array
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arrCopy[i]);
    }
    
    return 0;
}