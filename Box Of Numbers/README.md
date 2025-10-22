# 📦 Box Of Numbers (C++)

A simple C++ program that simulates a container of integers and computes their sum and average. Built with modular design and CMake integration, this project reinforces input validation, vector operations, and basic statistics.

---

## 🚀 Features

- 🔢 Accepts dynamic user input for vector size and elements
- ➕ Calculates total sum of all numbers
- 📊 Computes average with precision
- 🔁 Replay loop for multiple sessions
- 🧩 Modular structure with header/source separation

---

## 🧠 Concepts Covered

- Input validation using `cin.fail()` and `limits`
- Vector manipulation (`std::vector`)
- Basic statistics (sum, average)
- Function encapsulation and class design
- CMake build system and batch execution

---

## 📂 File Structure

```
Box Of Numbers/
├── include/
│   └── boxOfNumbers.h         # Class declaration
├── src/
│   ├── boxOfNumbers.cpp       # Input, sum, average logic
│   └── main.cpp               # User interaction and loop
├── CMakeLists.txt             # Build configuration
├── run.bat                    # Windows batch script
├── build/                     # CMake-generated build artifacts
```

---

## ⚙️ How to Build & Run

### 🖥️ Using CMake (Recommended)

```bash
mkdir build
cd build
cmake ..
make
./BoxOfNumbers
```

### 🪟 On Windows (Batch Script)

Double-click `run.bat` or run from terminal:

```cmd
run.bat
```

---

## 📝 Sample Output

```
Enter the size of the Vector (positive integer): 4
Enter the Numbers:
Number 1: 10
Number 2: 20
Number 3: 30
Number 4: 40
Sum: 100
Average: 25

Do You Want To Play Again... (Y/N)
y
Enter the size of the Vector (positive integer): -5
Invalid size. Please enter a positive integer.
Enter the size of the Vector (positive integer): abc
Invalid size. Please enter a positive integer.
Enter the size of the Vector (positive integer): 3
Enter the Numbers:
Number 1: 5
Number 2: xyz
Invalid input. Please enter a valid integer.
Number 2: 15
Number 3: 25
Sum: 45
Average: 15

Do You Want To Play Again... (Y/N)
n
Thank You for Playing the Game...
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
