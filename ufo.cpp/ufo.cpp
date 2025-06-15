#include <iostream>
#include <vector>
#include <limits>
#include "ufo_functions.hpp"

int main() {
  greet();

  std::string codeword = "codecademy";
  std::string answer(codeword.length(), '_');
  int misses = 0;
  std::vector<char> incorrect;
  char letter;

  while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);

    std::cout << "\n\nPlease enter your guess: ";
    std::cin >> letter;

    if (!std::isalpha(letter) || std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a single alphabet letter.\n";
      continue;
    }

    letter = std::tolower(letter);
    bool guess_correct = false;

    for (int i = 0; i < codeword.length(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess_correct = true;
      }
    }

    if (guess_correct) {
      std::cout << "\nCorrect!\n";
    } else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
  }

  end_game(answer, codeword);
  return 0;
}