// Program to find area of rectangle

#include <stdio.h>

int main() {
    int length;
    int breadth;

    scanf("%d\n", &length);		//Gets user input
    scanf("%d", &breadth);

    int area = length * breadth;	//calculates area with inputs

    printf("%d", area);		//prints result of area

    return 0;
}