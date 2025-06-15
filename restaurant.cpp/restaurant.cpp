#include "Restaurant.hpp"
#include <iostream>

// Constructor: Creates the requested number of tables
Restaurant::Restaurant(int initialTableCount) {
    for (int i = 1; i <= initialTableCount; ++i) {
        tables.push_back(std::make_unique<Table>(i));
    }
}

// Try to reserve a table for the given customer
bool Restaurant::reserveTable(std::shared_ptr<Customer>& customer) {
    for (auto& table : tables) {
        if (table->isAvailable()) {
            table->reserve(customer);
            activeCustomers.push_back(customer);
            return true;
        }
    }

    // No table available; add customer to waitlist
    waitlist.push_back(customer);
    return false;
}

// Print all customers currently waiting for a table
void Restaurant::printWaitlist() {
    std::cout << "The following people are waiting for a table:\n";
    for (auto& customerPtr : waitlist) {
        std::cout << "- " << customerPtr->getName() << "\n";
    }
}

// Release a table and try to reassign it to the next person in line
void Restaurant::releaseTable(int tableNumber) {
    for (auto& table : tables) {
        if (table->getNumber() == tableNumber && !table->isAvailable()) {
            table->release();
            notifyWaitlist();  // Offer table to next waiting customer
            return;
        }
    }
}

// Attempt to assign a free table to the first person in the waitlist
void Restaurant::notifyWaitlist() {
    if (waitlist.empty()) return;

    std::shared_ptr<Customer> customer = waitlist.front();
    if (customer) {
        if (reserveTable(customer)) {
            waitlist.erase(waitlist.begin());  // Remove customer from waitlist after assigning table
        }
    }
}
