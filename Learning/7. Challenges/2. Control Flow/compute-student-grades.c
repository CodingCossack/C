// Program to find the grade of a student based on the marks.
#include <stdio.h>

int main() {
    double marks;

    scanf("%lf", &marks);			// get input value for marks

    if (marks >= 90) {				// check the value of marks and assign grade based on the value
        printf("A");
    }
    else if (marks >= 80) {
        printf("B");
    }
    else if (marks >= 70) {
        printf("C");
    }
    else {
        printf("D");
    }

    return 0;
}