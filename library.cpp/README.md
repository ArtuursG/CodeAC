# 📚 C++ Library Management System

## 🔍 What the Project Does

This C++ project simulates a basic library system. It tracks available books, allows borrowing, manages a fixed budget, and keeps a global count of how many books were borrowed.

---

## 🎯 Why It Was Built

To practice and demonstrate:

- Global and static variable usage
- Vector-based data storage
- Memory-safe list manipulation
- Multi-file C++ structure
- Budget and capacity checking logic

---

## 🧱 Project Structure
```
├── main.cpp            # Entry point, handles interactions and prints output
├── Library.hpp/.cpp    # Core logic: add, list, and borrow books
├── removeelement.hpp   # Helper function to remove a book from the list
├── README.md           # Documentation
```

## 🚀 How to Run It

### 1. Clone or Download
- git clone https://github.com/ArtuursG/CodeAC.git
- cd CodeAC

### 2. Compile
- g++ main.cpp Library.cpp -o library

### 3. Run
- ./library

## 📚 Lessons Learned / Technical Challenges

- Global and static variables must be defined carefully to avoid linker errors.
- Handling budget limits is critical for real-world logic.
- Vector operations (like remove) should be done safely.
- Splitting logic into .hpp and .cpp improves maintainability.

## ✨ Possible Improvements

- Add reserveBook() function
- Track who borrowed what
- Save/load state from files
- Add maximum borrow limit per user