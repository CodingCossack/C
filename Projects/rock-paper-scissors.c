// rock paper scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// returns either 'r', 'p', or 's' for rock, paper or scissors
char getComputersChoice() {

    // generate random number based on time
  srand(time(NULL));
  
  int randomNumber = (rand() % 3) + 1;
  char computersChoice;

  switch(randomNumber) {
    case 1:
      computersChoice = 'r';
      break;
    case 2:
      computersChoice = 'p';
      break;
    case 3:
      computersChoice = 's';
      break;
  }

  return computersChoice;
}

// function to get user input
// take user input and return it
char getUserInput() {
  char userInput;

  printf("Enter Your Choice\n(r for rock, p for paper, s for scissors): ");
  scanf(" %c", &userInput);
  
  userInput = tolower(userInput);

  return userInput;
}

// return either 'w', 'l' or 'd' for win, loss or draw
char getResult(char userPick, char computerPick) {

  // condition for user to draw
  if (computerPick == userPick) {
    return 'd';
  }

  // conditions for user to win
  else if (userPick == 'p' && computerPick == 'r') {
    return 'w';
  }
  else if (userPick == 'r' && computerPick == 's') {
    return 'w';
  }
  else if (userPick == 's' && computerPick == 'p') {
    return 'w';
  }

  // all other conditions result in user losing
  else {
    return 'l';
  }
}

int main() {

  // get computer choice
  char computerPick = getComputersChoice();
  char userPick = getUserInput();


	while (1) {
 	 userPick = getUserInput();
 		 if (userPick == 'r' || userPick == 'p' || userPick == 's') {
    break;
  }
}

  char result = getResult(userPick, computerPick);

  // print result
  switch(result) {
    case 'w':
      printf("Computer's pick: %c\n", computerPick);
      printf("Your pick: %c\n", userPick);
      printf("You won");
      break;
    case 'l':
      printf("Computer's pick: %c\n", computerPick);
      printf("Your pick: %c\n", userPick);
      printf("You lose");
      break;
    case 'd':
      printf("Computer's pick: %c\n", computerPick);
      printf("Your pick: %c\n", userPick);
      printf("Draw");
      break;
  }

  return 0;
}