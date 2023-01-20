// Program to find the total occurrence of a character in a string.

#include <stdio.h>

int main() {
    
    // take the string input
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    // take character input
    char ch;
    scanf("%c", &ch);
    
    int count = 0;
    
    // find the length of string
    int length = strlen(str);

    // run a for loop from i = 0 to i < length
    // to access each character of string
    for (int i = 0; i < length; i++) {
        // compare each character with the ch character
        // if both are equal, increase the value of count
        if (ch == str[i]) {
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}