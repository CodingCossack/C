// Create a program to find the smallest element of the array using pointers given int numbers[5] = {55, 64, 75, 80, 65};

#include <stdio.h>

int main()
{
	int numbers[5] = {55, 64, 75, 80, 65};

	int smallest = *numbers;

	for (int i = 1; i < 5; i++){
		if (smallest > *(numbers + i)){
			smallest = *(numbers + i);
		}
	}

	printf("%d\n", smallest);

	return 0;
}