#include <iostream>

int main() {

  int dog_age = 4;

  int early_years;
  int later_years;
  int human_years;

  early_years = 21;

  later_years = (dog_age - 2) * 4;

  human_years = early_years + later_years;

  std::cout << "My name is RIO! Ruff ruff. I am " << human_years << " years old in human years.\n";

  return 0;
}
