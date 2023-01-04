// Program to create a two-value-input calculator.
#include <stdio.h>

int main() {
  
    char op;								// get input value for operator
    scanf("%c", &op);
    
    double first, second;					// get input value of first and second
    scanf("%lf %lf", &first, &second);
    
    switch(op) {
        
            case '+':								// perform operations based on the value of op
                 printf("%.1lf", first + second);
                 break;
            
            case '-':
                printf("%.1lf", first - second);
                break;
            
            case '*':
                printf("%.1lf", first * second);
                break;
            
            case '/':
                printf("%.1lf", first / second);
                break;

        default:						// if op doesn't match with any of the cases
            printf("Error!");
    }

    return 0;
}