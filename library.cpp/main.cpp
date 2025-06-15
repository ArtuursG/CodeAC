#include "Library.hpp"
#include <iostream>

using namespace std;

// Global variable for tracking the available budget
double libraryBudget = 5000;

int main() {
    // Print starting budget
    cout << "Current library budget is: " << libraryBudget << endl;

    // Create a Library object
    Library myLibrary;

    // Add books to the library, reducing the budget
    myLibrary.addBook("The Great Gatsby", 300);
    myLibrary.addBook("1984", 400);
    myLibrary.addBook("To Kill a Mockingbird", 350);

    // Show available books
    cout << "\nAvailable books:" << endl;
    myLibrary.listBooks();

    // (Optional feature: reserveBook could be implemented later)
    // myLibrary.reserveBook("1984");

    // Borrow a book
    myLibrary.borrowBook("To Kill a Mockingbird");

    // Show how many books have been borrowed in total
    cout << "The total number of borrowed books is: "
         << myLibrary.getTotalBorrowedBooks() << endl;

    return 0;
}