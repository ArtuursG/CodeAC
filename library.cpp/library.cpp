#include "Library.hpp"
#include "removeElement.hpp"
#include <iostream>

using namespace std;

// Initialize the static member variable
int Library::totalBorrowedBooks = 0;

// Constructor (empty for now, but may be extended)
Library::Library() {}

// List all available book titles
void Library::listBooks() {
    for (const auto& title : booklist) {
        cout << title << endl;
    }
}

// Add a book if there's room and the budget allows it
void Library::addBook(string title, double bookCost) {
    if (booklist.size() >= 100) {
        cout << "Library is full!" << endl;
        return;
    }

    if (bookCost > libraryBudget) {
        cout << "Not enough budget to add the book!" << endl;
        return;
    }

    booklist.push_back(title);
    libraryBudget -= bookCost;
}

// Borrow a book: remove from list and increase the borrowed count
bool Library::borrowBook(string title) {
    for (const auto& book : booklist) {
        if (book == title) {
            removeElement(booklist, title);
            totalBorrowedBooks++;
            cout << "Book borrowed!" << endl;
            return true;
        }
    }

    cout << "Book not found!" << endl;
    return false;
}

// Return total number of books borrowed
int Library::getTotalBorrowedBooks() {
    return totalBorrowedBooks;
}