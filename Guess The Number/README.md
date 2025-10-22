# 🎯 Guess The Number (C++)

A console-based number guessing game built in C++ with difficulty levels, hints, leaderboard tracking, and colorful terminal output. This project showcases input validation, randomness, file I/O, and user interaction — all wrapped in a modular design.

---

## 🚀 Features

- 🎮 Difficulty modes: Easy, Medium, Hard, and Custom
- 🎲 Random number generation using Mersenne Twister
- 🧠 Smart hints after 5 failed attempts (even/odd, divisibility)
- 🏆 Victory ASCII art and leaderboard logging
- 🎨 Windows console color effects via `SetConsoleTextAttribute`
- 📈 Leaderboard saved to `leaderBoard.txt` with attempts and duration
- 🔁 Replay loop for continuous gameplay

---

## 🧠 Concepts Covered

- Input validation with `cin.fail()` and `limits`
- Random number generation (`<random>`)
- Time tracking with `chrono`
- File writing with `ofstream`
- Windows-specific console manipulation
- Modular class design and header separation
- CMake build system integration

---

## 📂 File Structure

```
Guess The Number/
├── include/
│   └── guessthenumber.h         # Class declaration
├── src/
│   ├── guessthenumber.cpp       # Game logic and features
│   └── main.cpp                 # Game loop and user interaction
├── CMakeLists.txt               # Build configuration
├── run.bat                      # Windows batch script
├── build/                       # CMake-generated build artifacts
├── LICENSE                      # MIT License
```

---

## ⚙️ How to Build & Run

### 🖥️ Using CMake (Recommended)

```bash
mkdir build
cd build
cmake ..
make
./GuessTheNumber
```

### 🪟 On Windows (Batch Script)

Double-click `run.bat` or run from terminal:

```cmd
run.bat
```

---

## 📝 Sample Output

```
============================
     Guess the Number!
         by Raza
============================

Enter Difficulty: 
1- Easy Mode 
2- Medium Mode 
3- Hard Mode 
4- Custom Mode 
Note: Default Mode is Medium... 
Choice: 2
Normal Mode Selected... 
I am thinking of a Number between 1 and 100.
Enter Your Guess: 50
Your Guess: 50
Too Low...
Enter Your Guess: 75
Your Guess: 75
Too High...
Enter Your Guess: 65
Your Guess: 65
Too High...
Enter Your Guess: 58
Your Guess: 58
Too Low...
Enter Your Guess: 62
Your Guess: 62
Too High...
Hint: The Number is Even 
and is Divisible by 4.
Enter Your Guess: 60
Your Guess: 60
Congratulations! You Guessed The Number 60 in 6 attempts.

  ____   ___  _   _  ____ _____  _    _  ____  __     __
 |  _ \ / _ \| \ | |/ ___|_   _|/ \  | |/ ___| \ \   / /
 | | | | | | |  \| | |     | | / _ \ | | |      \ \ / / 
 | |_| | |_| | |\  | |___  | |/ ___ \| | |___    \ V /  
 |____/ \___/|_| \_|\____| |_/_/   \_\_|\____|    \_/    

Congratulations! You're a number ninja!

Do You Want To Play Again... (Y/N)
n
Thank You For Playing The Game!
```

---

## 📄 License

This project is licensed under the MIT License.

---

## 🙌 Author

Developed by [Muhammad Raza](https://github.com/yourusername)  
For learning, portfolio, and demonstration purposes.

---
