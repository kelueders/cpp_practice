/*
Rock Paper Scissors Lizard Spock
This program is for a rock paper scissors game with additional features 
including two more options Lizard and Spock.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  srand (time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;
  
  cout << "====================\n";
  cout << "rock paper scissors!\n";
  cout << "====================\n";

  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌️\n";
  cout << "4) Lizard\n";
  cout << "5) Spock\n";

  cout << "shoot! " << endl;
  cout << "Your choice: ";
  cin >> user;

  cout << "Computer's choice: " << computer << endl;
  cout << endl;

  if (computer == user) {
    cout << "You tied!";
  } else if (computer == 1) {
    if (user == 2)
      cout << "Paper covers Rock. You win!";
    else if (user == 3)
      cout << "Rock crushes Scissors. You lose.";
    else if (user == 4)
      cout << "Rock crushes Lizard. You lose.";
    else if (user == 5)
      cout << "Spock vaporizes Rock. You win!";
  } else if (computer == 2) {
    if (user == 1)
      cout << "Paper covers Rock. You lose.";
    else if (user == 3)
      cout << "Scissors cuts Paper. You win!";
    else if (user == 4)
      cout << "Lizard eats Paper. You win!";
    else if (user == 5)
      cout << "Paper disproves Spock. You lose.";
  } else if (computer == 3) {
    if (user == 1)
      cout << "Rock crushes Scissors. You win!";
    else if (user == 2)
      cout << "Scissors cuts Paper. You lose.";
    else if (user == 4)
      cout << "Scissors decapitates Lizard. You lose.";
    else if (user == 5)
      cout << "Spock smashes Scissors. You win!";
  } else if (computer == 4) {
    if (user == 1)
      cout << "Rock crushes Lizard. You win!";
    else if (user == 2)
      cout << "Lizard eats Paper. You lose.";
    else if (user == 3)
      cout << "Scissors decapitates Lizard. You win!";
    else if (user == 5)
      cout << "Lizard poisons Spock. You lose.";
  } else if (computer == 5) {
    if (user == 1)
      cout << "Spock vaporizes Rock. You lose.";
    else if (user == 2)
      cout << "Paper disproves Spock. You win!";
    else if (user == 3)
      cout << "Spock smashes Scissors. You lose.";
    else if (user == 4)
      cout << "Lizard poisons Spock. You win!";
  }

  cout << endl;
}