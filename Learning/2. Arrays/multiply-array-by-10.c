//Create a program to multiply each element of an array by 10

#include <stdio.h>

int main(){


	int numbers[4] = {43, 78, 23, 45};
	int newNumbers[4];

	for (int i = 0; i<4; i++){
		newNumbers[i] = numbers[i]*10;
	}

	for (int i = 0; i<4; i++){
		printf("%d\n", newNumbers[i]);
	}

	return 0;

}