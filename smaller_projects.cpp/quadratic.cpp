#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    double root1;
    double root2;

    std::cout << "Please give three values: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    //equation has a + and - sign:
    root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
    root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

    // Outputting the roots
    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";

  
}