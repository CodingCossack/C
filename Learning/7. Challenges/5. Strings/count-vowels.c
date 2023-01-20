// Program to count the number of vowels present in a string.

#include <stdio.h>

int main() {

    char text[150];

    // get input value for text using fgets()
    fgets(text, sizeof(text), stdin);

    // variable to count number of vowels
    int vowels = 0;

    // loop to access each character of text
    for (int i = 0; text[i] != '\0'; ++i) {

        // check if character at ith position is a vowel (lowercase or uppercase)
        if (text[i] == 'a' || text[i] == 'A' || text[i] == 'e' || text[i] == 'E' || text[i] == 'i' || text[i] == 'I' || text[i] == 'o' || text[i] == 'O' || text[i] == 'u' || text[i] == 'U') {
            vowels++;
        }
    }

    // print the value of vowel
    printf("%d", vowels);

    return 0;
}