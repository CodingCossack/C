// Print values of struct

#include <stdio.h>

struct Employee{
	int age;
	char name[50];
};


int main() {

    struct Employee employee1;

    scanf("%d ", &employee1.age);

    fgets(employee1.name, sizeof(employee1.name), stdin);

    printf("%s", employee1.name);
    printf("%d", employee1.age);

    return 0;
}