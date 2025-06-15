#include "Table.hpp"

// Constructor assigns a table number on creation
Table::Table(int number) : tableNumber(number) {}

// Checks if the table is available (not currently assigned to a customer)
bool Table::isAvailable() const {
    return seatedCustomer == nullptr;
}

// Assigns a customer to this table (reserves it)
void Table::reserve(std::shared_ptr<Customer> customer) {
    seatedCustomer = customer;
}

// Frees the table (removes the customer)
void Table::release() {
    seatedCustomer.reset();
}

// Returns this table's unique number
int Table::getNumber() const {
    return tableNumber;
}
