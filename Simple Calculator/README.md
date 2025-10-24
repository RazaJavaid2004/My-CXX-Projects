# 🧮 Simple Calculator (C++)

A console-based calculator built in C++ that performs basic arithmetic operations with input validation and a menu-driven interface. Designed for clarity, modularity, and ease of use, this project reinforces core programming concepts and user interaction.

---

## 🚀 Features

- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division (with zero-check and NaN handling)
- 🧠 Input validation using `cin.fail()` and `limits`
- 🔁 Menu loop for continuous calculations
- 🧩 Modular class design with header/source separation

---

## 🧠 Concepts Covered

- Function encapsulation and class design
- Input validation and error handling
- Switch-case control flow
- CMake build system integration
- Clean separation of logic and interface

---

## 📂 File Structure

```
Simple Calculator/
├── include/
│   └── simpleCalculator.h       # Class declaration
├── src/
│   ├── simpleCalculator.cpp     # Operation logic and menu
│   └── main.cpp                 # Entry point
├── CMakeLists.txt               # Build configuration
├── run.bat                      # Windows batch script
├── build/                       # CMake-generated build artifacts
```

---

## ⚙️ How to Build & Run

### 🖥️ Using CMake (Recommended)

```bash
mkdir build
cd build
cmake ..
make
./SimpleCalculator
```

### 🪟 On Windows (Batch Script)

Double-click `run.bat` or run from terminal:

```cmd
run.bat
```

---

## 📝 Sample Output

```
--------Main Menu----------
1- Addition 
2- Subtraction 
3- Multiplication 
4- Division 
5- Exit 
Enter Your Choice: 1
Enter the First Number: 10
Enter the Second Number: 5
Sum: 15

--------Main Menu----------
Enter Your Choice: 4
Enter the First Number: 20
Enter the Second Number: 0
Error: Division by zero is not allowed. 
Quotient: nan

--------Main Menu----------
Enter Your Choice: 5
Exiting...
```

---

## 📄 License

This project is licensed under the MIT License.

---

## 🙌 Author

Developed by [Muhammad Raza](https://github.com/RazaJavaid2004)  
For learning, portfolio, and demonstration purposes.

---

---
