// Program to count the total number of characters in a string.

#include <stdio.h>

int main() {
    
    char text[100];
    fgets(text, sizeof(text), stdin);		// get input string
    int count = 0;						// variable to count number of characters

    // use while loop with condition
    // if first character of text is not equal to '\0'
    while (text[count] != '\0') {
        count++;
    }

    // print count
    printf("%d", count);

    return 0;
}