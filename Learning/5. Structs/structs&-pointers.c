#include <stdio.h>
 
typedef struct Person {
  int age;
  double salary;
} person;
 
int main() {
 
  person person1 = {.age = 26, .salary = 30000};
  person* pt;
  pt = &person1;
 
  printf("Age: %d\n", pt -> age);
  printf("Salary: %.2lf", pt -> salary);
 
  return 0;
}