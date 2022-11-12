// Create a program to find the sum of first n natural numbers

#include <stdio.h>

int computeSum(int number){
	int total = 0;

	for (int i = 0; i<=number; i++){
		total = total + i;
	}
	
	return total;

}

int main() {

	int result = computeSum(15);
  	printf("%d\n", result);    // Output: 120
 
  	result = computeSum(120);
  	printf("%d", result);    // Output: 7260
  
  return 0;
}





