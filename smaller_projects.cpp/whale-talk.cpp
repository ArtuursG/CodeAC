#include <iostream>
#include <vector>
#include <string>

int main() {
  // Input string to translate into whale talk
  std::string input = "a whale of a deal!"; // Try other inputs like "hi, human"
  // std::string input = ""; // Uncomment to test with an empty string

  // Vowel translation result will be stored here
  std::vector<char> result;

  // Check if input string is empty
  if (input.empty()) {
    std::cout << "Input string is empty." << std::endl;
    return 1;
  }

  // Loop through each character in the input string
  for (int i = 0; i < input.size(); i++) {
    switch(input[i]) {
      case 'a':
      case 'i':
      case 'o':
        result.push_back(input[i]);
        break;

      case 'e':
      case 'u':
        // e and u get doubled
        result.push_back(input[i]);
        result.push_back(input[i]);
        break;

      // Ignore other characters
      default:
        break;
    }
  }

  // Print the result
  for (char c : result) {
    std::cout << c;
  }
  std::cout << std::endl;

  return 0;
}