// area of circle using macros

#include <stdio.h>
#define PI 3.1415

int main() {

    double radius;
    scanf("%lf", &radius);

    double area = PI * (radius * radius);
    printf("%.2lf", area);

    return 0;
}