#include <iostream>

int main() {
  
    double peso;
    double reais;
    double soles;
    double dollars;
    double pesodollars;
    double reaisdollars;
    double solesdollars;

    //Asks for Colombian Peso input
    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> peso;

    //Asks for Brasilian Reais input
    std::cout << "Enter number of Brasilian Reais: ";
    std::cin >> reais;

    //Asks for Peruvian Soles input
    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    //Here is the 1 currency compared to USD dollars (05.12.2024.)
    pesodollars = peso * 0.049;
    reaisdollars = reais * 0.17;
    solesdollars = soles * 0.27; 

    //Total amount of dollars
    dollars = pesodollars + reaisdollars + solesdollars;

    std::cout << "Your total amount of American USD is: " << dollars;

}