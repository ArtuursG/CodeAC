#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to determine if the user wins
bool isUserWinner(int user, int computer) {
  if (user == computer) return false;

  switch(user) {
    case 1: return (computer == 3 || computer == 4); // Rock
    case 2: return (computer == 1 || computer == 5); // Paper
    case 3: return (computer == 2 || computer == 4); // Scissors
    case 4: return (computer == 2 || computer == 5); // Lizard
    case 5: return (computer == 1 || computer == 3); // Spock
    default: return false;
  }
}

std::string choiceName(int choice) {
  switch(choice) {
    case 1: return "Rock ✊";
    case 2: return "Paper ✋";
    case 3: return "Scissors ✌️";
    case 4: return "Lizard 🦎";
    case 5: return "Spock 🖖";
    default: return "Unknown";
  }
}

int main() {
  std::srand(time(NULL));
  int user_choice = 0;
  int computer_choice = std::rand() % 5 + 1;

  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊ - Rock\n";
  std::cout << "2) ✋ - Paper\n";
  std::cout << "3) ✌️ - Scissors\n";
  std::cout << "4) 🦎 - Lizard\n";
  std::cout << "5) 🖖 - Spock\n\n";

  std::cout << "Shoot! ";
  std::cin >> user_choice;

  // Validate input
  if (user_choice < 1 || user_choice > 5 || std::cin.fail()) {
    std::cout << "Invalid input! Choices are 1-5.\n";
    return 1;
  }

  std::cout << "\nYou chose: " << choiceName(user_choice) << "\n";
  std::cout << "Computer chose: " << choiceName(computer_choice) << "\n\n";

  if (user_choice == computer_choice) {
    std::cout << "It's a TIE!\n";
  } else if (isUserWinner(user_choice, computer_choice)) {
    std::cout << "You WIN!\n";
  } else {
    std::cout << "You LOSE!\n";
  }

  return 0;
}