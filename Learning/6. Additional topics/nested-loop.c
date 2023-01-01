// nested loops

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            printf("*\n");
        }
    }
    return 0;
}

/*
Takes user input to output stars using nested loop.
*/