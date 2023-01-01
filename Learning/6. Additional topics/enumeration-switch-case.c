// ENUMERATION EXAMPLE USING SWITCH/CASE STATEMENT
#include <stdio.h>

enum Size {
    Small,
    Medium,
    Large
} size;

int main() {

    size = Small;

    switch(type){
        case Small:
            printf("SMALL");
            break;
        case Medium:
            printf("MEDIUM");
            break;
        case Large:
            printf("LARGE");
            break;
        
    }

    return 0;
}

// Enum variables can only take one out of a small set of possible values.
// If we know all possible values a variable can take, it is better to use enums. 
// This improves the readability of the code.