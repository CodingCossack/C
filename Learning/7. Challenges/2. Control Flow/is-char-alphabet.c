// Program to check if a character is an alphabet or not.

#include <stdio.h>

int main() {
  
    char alphabet;				// get character input
    scanf("%c", &alphabet);
    
    // check if character is in the range 'a' to 'z' or 'A' to 'Z'
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) {
        printf("Alphabet");
    }
    else {
        printf("Not an Alphabet");
    }
    
    return 0;
}