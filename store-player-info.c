// Store player info

#include <stdio.h>
 
struct Player {
  char name[50];
  int strength;
  double stamina;
} player1;
 
int main() {
 
  printf("Enter name: ");
  fgets(player1.name, sizeof(player1.name), stdin);
 
  printf("Enter strength: ");
  scanf(" %d", &player1.strength);
 
  printf("Enter stamina: ");
  scanf(" %lf", &player1.stamina);
 
 
  // print student info
  printf("Name: %s", player1.name);
  printf("Strength: %d\n", player1.strength);
  printf("Stamina: %.2lf", player1.stamina);
 
  return 0;
}