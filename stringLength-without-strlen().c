#include <stdio.h>
 
int main() {
 
  char text[] = "I love C";

  int length = 0;

  while (text[length] != '\0'){
    ++length
  }

  printf("Length: %d", length);

  return 0;
}