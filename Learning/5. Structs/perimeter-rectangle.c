// perimiter of rectangle

#include <stdio.h>

struct Rectangle {
	int length;
	int breadth;
};

void findPerimeter(struct Rectangle rec1){
	int perimeter = 2*rec1.length + 2*rec1.breadth;
	printf("%d", perimeter);
}

int main(){
	struct Rectangle rec1;
	scanf("%d %d ", &rec1.length, &rec1.breadth);

	findPerimeter(rec1);

	return 0;
}