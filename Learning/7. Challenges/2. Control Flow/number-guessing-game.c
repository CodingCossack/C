// Program to check if a number guessed by the user is correct or not.

#include <stdio.h>

int main() {

    int correctNumber = 18;										// create a variable named correctNumber

    int guessedNumber;											// get input for guessedNumber variable
    scanf("%d", &guessedNumber);

    if (guessedNumber < 100 && guessedNumber > 18) {			// use if-else statement to check if the guess is correct or not
        printf("Wrong, your guess is larger");
    }
    else if (guessedNumber > 0 && guessedNumber < 18) {
        printf("Wrong, your guess is smaller");
    }
    else if (guessedNumber == correctNumber) {
        printf("Your guess is correct");
    }

    return 0; 
}