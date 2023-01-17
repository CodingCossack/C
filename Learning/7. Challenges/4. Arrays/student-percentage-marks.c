// Program to find the percentage obtained by a student.

#include <stdio.h>

int main() {

    double marks[8];

    // get input value for obtained marks
    for (int i = 0; i < 8; i++) {
        scanf("%lf", &marks[i]);
    }

    int totalMarks = 800;
    double obtainedMarks = 0.0;

    // find the sum of obtained marks
    for (int i = 0; i < 8; i++) {
        obtainedMarks = obtainedMarks + marks[i];
    }
    
    // find the percentage and print it
    double percentage = obtainedMarks / 8;
    printf("%.2lf", percentage);

    return 0;
}