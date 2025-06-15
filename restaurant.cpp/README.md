# 🍽️ C++ Restaurant Reservation System

## 🔍 What the Project Does

This C++ project simulates a small restaurant's table reservation system using modern C++ features.  
It manages:

- Table reservations
- A waitlist for customers when tables are full
- Automatic reassignment from the waitlist when a table becomes available

The system uses smart pointers to ensure safe and clear memory management throughout.

---

## 🎯 Why It Was Built

This project was designed to practice and demonstrate:

- Object-oriented programming (OOP) in C++
- Smart pointer usage (`std::shared_ptr`, `std::unique_ptr`, `std::weak_ptr`)
- Real-world system modeling
- Memory-safe resource handling
- Separation of concerns across multiple header/source files

---

## 🧱 Project Structure
```
├── main.cpp              # Entry point
├── Restaurant.hpp / .cpp # Manages tables, customers, and waitlist logic
├── Table.hpp / .cpp      # Represents individual tables
├── Customer.hpp / .cpp   # Represents customers
├── removeelement.hpp     # Utility for removing weak_ptr from vectors
```
---

## 🚀 How to Run It

### 1. Clone or Download
- git clone https://github.com/ArtuursG/CodeAC.git
- cd CodeAC

### 2. Compile
- g++ main.cpp Restaurant.cpp Table.cpp Customer.cpp -o restaurant

### 3. Run
- ./restaurant

##  Lessons Learned / Technical Challenges

- How to use smart pointers to manage object lifetimes without leaks.
- How to design class interactions around real-world logic (tables, customers, and availability).
- How to use weak pointers when holding non-owning references (e.g. for the waitlist).
- How to split C++ code across multiple files with proper include guards and headers.