// Program to find the youngest brother among 3 based on their ages.

#include <stdio.h>

int main() {
  
    int jack;
    int roman;
    int johnny;

    scanf("%d %d %d", &jack, &roman, &johnny);			// get age input for jack, roman and johnny

    if (jack < roman && jack < johnny) {				// use if else to find the youngest brother
        printf("Jack");
    }
    else if (roman < jack && roman < johnny) {
        printf("Roman");
    }
    else {
        printf("Johnny");
    }

    return 0;
}