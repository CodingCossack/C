// Given a character & string find the number of times this character is present in the string

#include <stdio.h>
#include <string.h>
 
int main() {
 
  char text[] = "C programming is my second language.";
  char ch = 'e';

  int freq = 0;

  for (int i = 0; i < strlen(text); i++){

  	if (ch == text[i]){
  		++freq;
  	}

  	printf("%d", freq);
  }

