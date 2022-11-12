//Create a program to find the square of a number using pointers

#include <stdio.h>

void findSquare(int* n) {
    int square = (*n * *n);			//Prev. int square; square = *n**n;

    						      
    *n = square;
}

int main() {
    int number;
    scanf("%d", &number);


    findSquare(&number);			//Pass address to call function

    printf("%d", number);

    return 0;
}