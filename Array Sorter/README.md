# 📊 Array Sorter (C++)

A modular C++ program that demonstrates multiple sorting algorithms on user-defined arrays. Built with CMake and structured for clarity, testing, and scalability.

---

## 🚀 Features

- 🧮 Supports Bubble Sort, Selection Sort, and Insertion Sort
- 📥 Accepts dynamic array input from the user
- 📤 Displays sorted output with timing (optional)
- 🧪 Includes test scaffolding via CMake and CTest
- 🧩 Modular design with header/source separation

---

## 🧠 Concepts Covered

- Array manipulation
- Sorting algorithms
- Function modularity
- Header file usage
- CMake build system
- Basic testing with CTest

---

## 📂 File Structure

```
Array Sorter/
├── include/
│   └── arraySorter.h         # Function declarations
├── src/
│   ├── arraySorter.cpp       # Sorting algorithm implementations
│   └── main.cpp              # User interaction and execution logic
├── CMakeLists.txt            # Build configuration
├── run.bat                   # Windows batch script to compile and run
├── build/                    # CMake-generated build artifacts
├── .vscode/                  # Editor settings
```

---

## ⚙️ How to Build & Run

### 🖥️ Using CMake (Recommended)

```bash
mkdir build
cd build
cmake ..
make
./ArraySorter
```

### 🪟 On Windows (Batch Script)

Double-click `run.bat` or run from terminal:

```cmd
run.bat
```

---

## 📝 Sample Input/Output

```
Enter the Size of the Array: 5
Enter the Numbers: 
Number 1: 42
Number 2: 17
Number 3: 8
Number 4: 23
Number 5: 5
Current Array: 42 17 8 23 5 
Sorted Array: 5 8 17 23 42 
Do You Want To Play The Game Again... (Y/N) 
y
Enter the Size of the Array: -3
Invalid Size! Please Enter a Positive Number! 
Enter the Size of the Array: abc
Invalid Size! Please Enter a Positive Number! 
Enter the Size of the Array: 3
Enter the Numbers: 
Number 1: 10
Number 2: xyz
Invalid Input! Please Enter the Valid Integer! 
Number 2: 20
Number 3: 15
Current Array: 10 20 15 
Sorted Array: 10 15 20 
Do You Want To Play The Game Again... (Y/N) 
n
Thank You For Playing The Game!
```

---

## 🧪 Testing

CTest is configured via CMake. To run tests:

```bash
cd build
ctest
```

---

## 📄 License

This project is licensed under the MIT License.

---

## 🙌 Author

Developed by [Muhammad Raza](https://github.com/RazaJavaid2004)  
For portfolio, learning, and demonstration purposes.

---

```

Let me know when you're ready to move on to the next project folder — I’ll keep each README clean, modular, and tailored to your repo structure.
