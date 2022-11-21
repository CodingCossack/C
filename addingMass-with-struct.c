// Add 2 masses with different units using struct

#include <stdio.h>

typedef struct Mass {
	int stone;
	int pounds;
} mass;

int main(){

	mass m1;
	mass m2;
	mass result;

	printf("Enter first distances\n");
	printf("Enter stone and pounds: ");
	scanf("%d %d", &m1.stone, &m1.pounds);

	printf("Enter second distances\n");
	printf("Enter stone and pounds: ");
	scanf("%d %d", &m2.stone, &m2.pounds);

	result.stone = m1.stone + m2.stone;
	result.pounds = m1.pounds + m2.pounds;

	result.stone = result.stone + (result.pounds / 14);
	result.pounds = result.pounds % 14;

	printf("Sum is %d stone and %d pounds", result.stone, result.pounds);

	return 0;
}
