#include "Restaurant.hpp"
#include "Customer.hpp"
#include <iostream>
#include <memory>

int main() {
    // Create a restaurant with 2 available tables
    Restaurant restaurant(2);

    // Create customers using shared pointers
    auto customer1 = std::make_shared<Customer>("Alice");
    auto customer2 = std::make_shared<Customer>("Bob");
    auto customer3 = std::make_shared<Customer>("Charlie");
    auto customer4 = std::make_shared<Customer>("Diana");

    // Store all customers in a vector
    std::vector<std::shared_ptr<Customer>> customers = {
        customer1, customer2, customer3, customer4
    };

    // Try to reserve a table for each customer
    for (auto& customer : customers) {
        if (restaurant.reserveTable(customer)) {
            std::cout << "Reserving table for " << customer->getName() << ": Success!\n";
        } else {
            std::cout << "Reserving table for " << customer->getName() << ": Added to waitlist!\n";
        }
    }

    // Release table 1 to simulate a customer leaving
    restaurant.releaseTable(1);

    // Print current waitlist after releasing a table
    restaurant.printWaitlist();

    return 0;
}
