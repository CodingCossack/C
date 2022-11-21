// area of rectangle

#include <stdio.h>
 
struct rectangle{
  	int length;
  	int width;
};
 
void findArea(struct rectangle rec1) {
  	int area = rec1.length * rec1.width;
  	printf("Area: %d", area);
}
 
int main() {
 
  	struct rectangle rec = {.length = 4, .width = 2};

  	findArea(rec);
 
  return 0;
}