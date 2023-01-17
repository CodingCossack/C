// Program to compute Standard Deviation

#include <stdio.h>
#include <math.h>

// function to compute standard deviation
double calculateSD(double data[], int size) {
    
    if (size <= 0 || data == NULL) {	// checks if input array valid or has at least one element
        return NAN;
    }
    
    double sum = 0.0;

    // find the sum of all the array elements
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }

    // compute the mean
    double mean = sum / size;   // (sizeof(data) / sizeof(data[0]) finds array size too

    // find difference of each value and mean
    // compute the square of each difference
    // add all the squared difference
    double result = 0.0;
    double difference;
    double difference_squared;
    
    for (int i = 0; i < size; i++) {
        difference = mean - data[i];
        difference_squared = pow(difference, 2);
        result +=  difference_squared;
    }

    // compute variance by dividing the above result by 5.0
    double variance = result / size;
    
    // compute the standard deviation by
    // calculation the square root of variance 
    double sd = sqrt(variance);
    
    // check if the square root function returned an error
    if (isnan(sd)) {
        return NAN;
    }

    // return standard deviation
    return sd;
}

int main() {
    
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    double numArray[size];

    // get input array elements
    for (int i = 0; i < size; i++) {
        printf("\nEnter element %d: ", i + 1);
        scanf("%lf", &numArray[i]);
    }

    // call calculateSD with arguments numArray
    double sd = calculateSD(numArray, size);

    // print the returned value
    printf("\n\nStandard deviation: %.3lf", sd);
    
    return 0;
}