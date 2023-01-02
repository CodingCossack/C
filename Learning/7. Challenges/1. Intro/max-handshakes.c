//Maximum possible handshakes from N number of students

#include <stdio.h>

int main() {
    
    int students;

    scanf("%d", &students);

    int combo = (students * (students - 1)) / 2;	//combo formula for calculation:
    												//combination = (n * (n - 1)) / 2
  													//n = total number of students
    
   	printf("%d", combo);
    
    return 0;
}