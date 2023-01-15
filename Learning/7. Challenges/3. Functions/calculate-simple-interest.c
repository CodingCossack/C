// Program to calculate simple interest using a function

#include <stdio.h>

double simpleInterest (double principal, double time, double rate) {	// double data type function with 3 arguments
    double simpleInterest = (principal * time * rate) / 100;			// formula to compute simple interest
    return simpleInterest;											// returns value
}

int main() {

    double principal, time, rate;						// ------- take input for principal, time, and rate
    scanf("%lf %lf %lf", &principal, &time, &rate);

    double interest = simpleInterest(principal, time, rate);	// call simpleInterest() with arguments: principal, time and rate

    printf("%.2lf", interest);								// --- print simple interest

    return 0;
}