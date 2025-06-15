# Word Censorship (bleep)

## 🔍 What the Project Does
This C++ project censors a specified word in a sentence by replacing it with asterisks (`*`). It demonstrates basic string manipulation and function usage.

## 🎯 Why It Was Built
This project helps practice:
- String iteration
- Passing by reference
- Header/source file separation
- Modular design in C++

## 🚀 How to Run It

### 1. Clone or download the files:
- git clone https://github.com/ArtuursG/CodeAC.git
- cd CodeAC

### 2. Compile:
- g++ bleep.cpp functions.cpp -o bleep

### 3. Run:
- ./bleep

##  Lessons Learned / Technical Challenges
- Managing multi-line strings in C++ requires concatenation or breaking into parts.
- Proper bounds checking is critical to avoid reading past the end of a string.
- Passing strings by reference enables in-place modifications efficiently.
