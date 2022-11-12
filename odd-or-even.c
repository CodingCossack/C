// Create a program to check whether a number is odd or even by creating a function.


#include <stdio.h>

int oddEven(int number){

	if (number % 2 ==0){
		return 1;
	} 

	else{
		return 0;
	}
}

int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int result = oddEven(n);

	if (result == 1){
	printf("%d is Even", n);
		}

	else {
		printf("%d is Odd", n);
	}

	return 0;
}
