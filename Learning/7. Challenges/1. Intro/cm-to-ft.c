// Program to find area of rectangle

#include <stdio.h>

int main() {  
 
    double centimeter;

    scanf("%lf", &centimeter);	//get user input

    double feet = centimeter * 0.0328;    //conversion
    
    printf("%lf", feet);		//print result
 
    return 0;  
}