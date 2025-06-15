#pragma once
#include <memory>
#include "Customer.hpp"

class Table {
public:
    // Constructor that takes a table number
    Table(int number);

    // Checks if the table is currently unoccupied
    bool isAvailable() const;

    // Assign a customer to the table
    void reserve(std::shared_ptr<Customer> customer);

    // Release the table (make it available again)
    void release();

    // Return the table's number
    int getNumber() const;

private:
    int tableNumber;  // Identifier for this table
    std::shared_ptr<Customer> seatedCustomer;  // Customer seated at this table
};
