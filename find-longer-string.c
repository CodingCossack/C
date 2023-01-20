// Program to find the longer string among two strings.

#include <stdio.h>

// function to find the length
int findLength(char text[100]) {
    int count = 0;
    
    // run a while loop to access each characters
    // inside loop, increase value of count
    while (text[count] != '\0') {
        count++;
    }

    return count;
}

int main() {

    char text1[100];
    char text2[100];c
    
    scanf("%s %s", &text1, &text2); 		// get 2 string inputs
    
    findLength(text1);					// find the length of two strings by calling findLength()
    findLength(text2);

    // compare the length of two strings
    // and print the string with the larger length
    if (findLength(text1) > findLength(text2)) {
        printf("%s", text1);
    }
    else if (findLength(text1) == findLength(text2)) {
        printf("Equal length");
    }
    else {
        printf("%s", text2);
    }

    return 0;
}