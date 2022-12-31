#include <stdio.h>
 
struct player{
  char name[50];
  int age;
};

void display(struct player p1) {
  printf("Name: %s\n", p1.name);
  printf("Age: %d", p1.age);
}
 
int main() {
 
  struct player player1 = {.name = "Dima", .age = 26};
 
  display(player1);
 
  return 0;
}