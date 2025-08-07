# 📦 Box of Numbers

**Box of Numbers** is a simple yet elegant C++ console application that takes five integers as input from the user, calculates their sum and average, and displays the results in a neat format. This project serves as a foundation for mastering input/output handling and basic arithmetic in C++.

## 🚀 Features

- Accepts **5 integer inputs** from the user
- Calculates and displays:
  - **Sum** of the numbers
  - **Average** of the numbers (as a floating-point value)
- Lightweight, beginner-friendly code structure

## 🔧 How to Run

### 🖥 Prerequisites
- A C++ compiler (e.g. GCC, Clang, or MSVC)
- VS Code or any C++-friendly IDE
- Command line access

⚙️ Compilation Instructions (Terminal)
Assuming you're in the project root directory, compile like this:

g++ -Iinclude src/main.cpp src/boxOfNumbers.cpp -o build/BoxOfNumbers.exe

- -Iinclude tells the compiler to look for headers in the include folder.
- This compiles both source files and links them into BoxOfNumbers.exe inside the build folder.

🚀 How to Run
You can run the program using:
build/BoxOfNumbers.exe

Or just double-click your .bat launcher for convenience.

📷 Sample Output
Enter 5 numbers:
12 45 67 23 89

Sum = 236
Average = 47.2

💡 Ideas for Future Enhancements
- Make input size dynamic instead of fixed at 5
- Add input validation to catch non-numeric or invalid entries
- Include statistics like min, max, median, or even mode
- Introduce ASCII splash screens or colorful output for presentation polish

🧠 Author
Created by Muhammad Raza — always learning, always building. 👨‍💻
Project designed to explore core C++ fundamentals with a clean user interface.
📜 License
This project is open-source under the MIT License. Feel free to fork, modify, and build on it!