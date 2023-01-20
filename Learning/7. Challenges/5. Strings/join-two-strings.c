// Program to find the total occurrence of a character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char text1[100];
    char text2[100];
    char joined[200] = ""; // Initialize the joined string with an empty string
    
    // get string input using scanf
    scanf("%s", text1);
    scanf("%s", text2);

    // join two string using strcat and add space between them
    strcat(joined, text1);
    strcat(joined, " ");
    strcat(joined, text2);
    

    // print joined string
    printf("%s", joined);

    return 0;
}

/* OR

#include <stdio.h>
#include <string.h>

int main() {
    char text1[100];
    char text2[100];
    
    // get string input using scanf
    scanf("%s", text1);
    scanf("%s", text2);

    // join two string using strcat and add space between them
    strcat(text1, " ");
    strcat(text1, text2);

    // print joined string
    printf("%s", text1);

    return 0;
}

*/