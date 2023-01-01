// Subtract 2 matrices

#include <stdio.h>

int main() {

    // first matrix
    int A[3][2] = {
        {9, 8}, {12, 21}, {32, 36}
    };

    // second matrix
    int B[3][2] = {
        {4, 5}, {10, 12}, {20, 19}
    };

    // matrix to store the difference
    int difference[3][2];

    // use nested loop to find the difference
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            
            difference[i][j] = A[i][j] - B[i][j];
        }
    }

    // print the difference matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}