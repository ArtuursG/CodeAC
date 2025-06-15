#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <vector>
#include <string>

using namespace std;

// Global variable to represent shared library budget
extern double libraryBudget;

class Library {
  private:
    vector<string> booklist;           // List of book titles in the library
    static int totalBorrowedBooks;     // Shared counter for how many books were borrowed

  public:
    Library();                         // Constructor

    void addBook(string title, double bookCost);   // Add book if there's space and enough budget
    bool borrowBook(string title);                 // Borrow a book (removes it from list)
    void listBooks();                              // Display all available books
    int getTotalBorrowedBooks();                   // Return how many books have been borrowed
};

#endif
