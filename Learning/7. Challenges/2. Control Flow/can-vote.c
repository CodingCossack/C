// Program to check if a person can vote or not based on the age.

#include <stdio.h>

int main() {
  
    int age;					// get input value for the age
    scanf("%d", &age);
    
    if (age >= 18) {			// check if the age is greater than or equal to 18
        printf("Can Vote");
    }
    
    else {
        printf("Cannot Vote");
    }
    
    return 0;
}