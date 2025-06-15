#pragma once
#include <string>

class Customer {
public:
    // Constructor that takes a customer name
    Customer(const std::string& name);

    // Returns the name of the customer
    std::string getName() const;

private:
    std::string name;  // The customer's name
};
