# 🧾 Student Record System (C++)

A modular C++ class-based system for managing student records, including name, roll number, and marks. This project demonstrates encapsulation, vector handling, and unit testing using Google Test — ideal for showcasing object-oriented design and test-driven development.

---

## 🚀 Features

- 🧑‍🎓 Create and manage student records
- ✏️ Modify student name, roll number, and marks
- 📊 Retrieve and display student details
- ✅ Unit tests using Google Test framework
- 🧩 Modular structure with header/source separation
- 🛠️ CMake build system integration

---

## 🧠 Concepts Covered

- Class design and encapsulation
- Constructor initialization and setter/getter methods
- Vector manipulation (`std::vector`)
- Unit testing with `gtest`
- CMake-based build and test configuration

---

## 📂 File Structure

```
Student Record System/
├── include/
│   └── StudentRecordSystem.h         # Class declaration
├── src/
│   ├── StudentRecordSystem.cpp       # Implementation of methods
│   └── main.cpp                      # Demo usage and output
├── tests/
│   └── StudentRecordSystemTest.cpp   # Google Test unit tests
├── CMakeLists.txt                    # Build configuration
├── run.bat                           # Optional Windows batch script
├── build/                            # CMake-generated build artifacts
```

---

## ⚙️ How to Build & Run

### 🖥️ Using CMake (Recommended)

```bash
mkdir build
cd build
cmake ..
make
./StudentRecordSystem
```

### 🧪 Run Tests (Google Test)

Make sure Google Test is installed and linked in your CMake setup.

```bash
./StudentRecordSystemTest
```

---

## 📝 Sample Output

```
Student Name: Muhammad Raza
Roll Number: 24175
Marks: 85 90 78 

Updated Student Record:
Student Name: M. Raza
Roll Number: 138
Marks: 88 92 95
```

---

## 🧪 Sample Test Results

```
[ RUN      ] StudentRecordSystemTest.Initialization
[       OK ] StudentRecordSystemTest.Initialization (0 ms)
[ RUN      ] StudentRecordSystemTest.SettersWork
[       OK ] StudentRecordSystemTest.SettersWork (0 ms)

[==========] 2 tests from StudentRecordSystemTest passed.
```

---

## 📄 License

This project is licensed under the MIT License.

---

## 🙌 Author

Developed by [Muhammad Raza](https://github.com/RazaJavaid2004)  
For learning, portfolio, and demonstration purposes.

---
