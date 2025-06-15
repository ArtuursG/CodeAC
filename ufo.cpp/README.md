# 👽 UFO: The Game

A simple terminal-based word guessing game (like Hangman) where you try to save your friend from alien abduction by guessing the correct letters in a secret codeword.

---

## 📜 Game Instructions

- You have **7 attempts** to guess all the letters in the codeword.
- For every wrong guess, the UFO's tractor beam pulls your friend closer to the ship.
- Guess the word correctly before 7 misses, or... goodbye, Earthling! 🛸

---

## 💡 Features

- ASCII-art visuals for each stage of abduction
- Input validation for letter guesses
- Case-insensitive guessing
- Code separation using a header file and helper functions

---

## 📂 Project Structure
```
ufo-game/
├── main.cpp # Main game logic
├── ufo_functions.hpp # Function declarations
├── ufo_functions.cpp # Function definitions
└── README.md # This file
```

---

## 🚀 How to Run

1. Clone the repository or download the files.
2. Compile with a C++ compiler:
- g++ main.cpp ufo_functions.cpp -o ufo
3. Run the executable:
- ./ufo

---

## 📚 Skills Practiced

- Loops and conditionals
- Function creation and modular design
- Vectors and strings
- Input validation with std::cin
- Custom header and implementation file usage

---