// Program to compute the area of a circle using a function.
#include <stdio.h>

double computeArea (double radius, double pi) {		// create computeArea() function that accepts radius and pi as parameters
    double area = pi * radius * radius;				// computes the area and return it
    return area;
}

int main() {
  
    double pi = 3.14;
    
    double radius;								// get input value for radius
    scanf("%lf", &radius);

    double area = computeArea(radius, pi);		// call computeArea() with arguments radius and pi

    printf("%.2lf", area);						// print returned value up to 2 decimal points

    return 0;
}