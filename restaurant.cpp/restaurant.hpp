#pragma once
#include <vector>
#include <memory>
#include "Table.hpp"
#include "Customer.hpp"

class Restaurant {
public:
    // Constructor initializes the restaurant with a given number of tables
    Restaurant(int initialTableCount);

    // Tries to reserve a table for a customer; returns true if successful, false otherwise
    bool reserveTable(std::shared_ptr<Customer>& customer);

    // Releases a specific table by number (frees it up)
    void releaseTable(int tableNumber);

    // Prints the current waitlist of customers
    void printWaitlist();

private:
    // Called after releasing a table to offer it to the first customer in the waitlist
    void notifyWaitlist();

    // List of tables in the restaurant
    std::vector<std::unique_ptr<Table>> tables;

    // Customers currently occupying tables
    std::vector<std::shared_ptr<Customer>> activeCustomers;

    // Customers waiting for a table
    std::vector<std::shared_ptr<Customer>> waitlist;
};
