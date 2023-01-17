// Program to find the mean height of players present in a football team.

#include <stdio.h>

int main () {

    double heights[11];
    
    // get input height
    for (int i = 0; i < 11; i++) {
        scanf("%lf\n", &heights[i]);
    }

    double sum = 0.0;
    
    // find the sum of all heights
    for (int i = 0; i < 11; i++) {
        sum += heights[i];
    }

    // find the mean and print it
    double mean = sum / 11.0;
    printf("%.2lf", mean);

    return 0;
}