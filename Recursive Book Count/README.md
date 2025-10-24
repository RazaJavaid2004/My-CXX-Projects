# 📚 Recursive Book Count (C++)

A console-based C++ program that calculates how many books can fit on a shelf using recursion. It validates user input, sorts book widths, and applies a greedy recursive strategy to maximize book placement. Built with modular design and CMake integration.

---

## 🚀 Features

- 📏 Accepts shelf width and book dimensions from user
- 🔁 Validates all inputs with clear error messages
- 📚 Recursively computes maximum number of books that fit
- 📐 Sorts book widths to optimize placement
- 🎨 Windows console color effects for UI enhancement
- 🔁 Replay loop for multiple test runs

---

## 🧠 Concepts Covered

- Recursion and base case logic
- Input validation using `cin.fail()` and `limits`
- Vector manipulation and sorting
- Modular class design with header/source separation
- Windows console color manipulation via `SetConsoleTextAttribute`
- CMake build system integration

---

## 📂 File Structure

```
Recursive Book Count/
├── include/
│   └── bookShelf.h              # Class declaration
├── src/
│   ├── bookShelf.cpp            # Recursive logic and input handling
│   └── main.cpp                 # Game loop and user interaction
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
./RecursiveBookCount
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
     Recursive Book Counter!
         by Raza
============================

Enter the shelf width (positive integer): 100
Enter Number of Books: 5
Enter the widths of the books: 
10
20
15
25
30
Maximum number of books that can fit on the shelf: 4 books 
Do You Want To Try Again (Y/N): y
Enter the shelf width (positive integer): -50
Invalid input. Please enter a positive integer: abc
Invalid input. Please enter a positive integer: 80
Enter Number of Books: 3
Enter the widths of the books: 
40
xyz
Invalid width for book 2. Please enter a positive integer: 20
10
Maximum number of books that can fit on the shelf: 3 books 
Do You Want To Try Again (Y/N): n
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
