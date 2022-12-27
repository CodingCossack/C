// Create a program that prints the largest number among three numbers by creating a function.

#include <stdio.h>

int getLargestNumber(int n1, int n2, int n3){

	if (n1>n2 && n1>n3) {
		largestNumber = n1;
	}

	else if (n2>n1 && n2>n3){
		largestNumber = n2;
	}

	else {
		largestNumber = n3;
	}

	return largestNumber;
	
}

int main() {

	int largestNnumber = getLargestNumber(15, 12, 30)	// output = 30
	printf("%d", largestNumber);

	largestNnumber = getLargestNumber(12, 120, -30)		// output = 120
	printf("%d", largestNumber);

	return 0;
}