## 🎲 Dice Roller

Dice Roller is a fun and interactive command-line application written in modern C++.
It simulates rolling a fair six-sided die using robust random number generation techniques.
Built with modular design and CMake for easy compilation across platforms.

## 📁 Project Structure

```
DiceRoller/
├── src/
│   ├── main.cpp           # Entry point of the application
│   ├── diceroller.cpp     # Dice rolling logic implementation
├── include/
│   └── diceroller.h       # Dice roller class/function declarations
├── build/                 # CMake-generated build files
├── CMakeLists.txt         # Build configuration
└── run.bat                # Windows batch file to compile and run
```

## 🚀 Features

- Modular C++ design with header/source separation
- Uses `std::random_device` and `std::mt19937` for high-quality randomness
- Interactive loop with user input
- CMake-based build system for portability
- Windows batch script for quick execution

## 🛠️ Technologies Used

- **C++11 or later**
- **CMake** for cross-platform builds
- **Standard Library**: `<random>`, `<iostream>`

## 🔧 Build Instructions

### 🖥️ Using CMake (Recommended)

1. Generate build files**:

   ```bash
   mkdir build
   cd build
   cmake ..
   ```

2. Compile the project**:

   ```bash
   cmake --build .
   ```

3. Run the executable**:

   ```bash
   ./DiceRoller
   ```

### Using `run.bat` (Windows)

Just double-click `run.bat` or run it from the terminal:

```cmd
run.bat
```

## 🎮 Sample Output

```
🎲 Welcome to Dice Roller!
You rolled: 5
Roll again? (y/n): y
You rolled: 2
Roll again? (y/n): n
Thanks for playing! 🎉
```

## 📌 Notes

- The randomness is seeded using `std::random_device`, making each session unique.
- The code is modular and easy to extend (e.g., multiple dice, ASCII art, roll history).

## 🤝 Contributing

Pull requests are welcome! Ideas for enhancements:
- ASCII art dice faces 🎲
- Roll statistics and history
- GUI version using a lightweight framework

## 📄 License

This project is licensed under the [MIT License](LICENSE).

Enjoy rolling the dice! 🎲✨
---

## 🙌 Author

Developed by [Muhammad Raza](https://github.com/RazaJavaid2004)  
For learning, portfolio, and demonstration purposes.
---
