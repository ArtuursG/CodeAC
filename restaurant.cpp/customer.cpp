#include "Customer.hpp"

// Constructor initializes the customer with a name
Customer::Customer(const std::string& name) : name(name) {}

// Returns the customer's name
std::string Customer::getName() const {
    return name;
}
