Awesome setup, Raza! You've got a clean and professional project structure. Based on your layout, here's an updated and well-organized `README.md` that reflects your directory structure and guides users through building and running the project with CMake.

---

### 📘 `README.md`

```markdown
# 🎓 Student Record System

A simple C++ project that models a student record system using classes and vectors. It allows you to store, retrieve, and update student information such as name, roll number, and marks.

---

## 📁 Project Structure

```

StudentRecordSystem/
├── include/
│   └── StudentRecordSystem.h
├── src/
│   ├── main.cpp
│   └── StudentRecordSystem.cpp
├── tests/
│   └── StudentRecordSystemTest.cpp
├── build/
├── CMakeLists.txt
└── README.md

```

---

## 🛠️ Build Instructions

### 🔧 Prerequisites

- C++ compiler (e.g. GCC, Clang, MSVC)
- [CMake](https://cmake.org/) installed

### ⚙️ Steps to Build

1. **Clone or download the project**

2. **Create a build directory** (if not already present):
   ```bash
   mkdir build
   cd build
```

3. **Run CMake to configure the project**:

   ```bash
   cmake ..
   ```
4. **Build the executable**:

   ```bash
   cmake --build .
   ```
5. **Run the program**:

   ```bash
   ./StudentRecordSystem
   ```

   > On Windows, use `StudentRecordSystem.exe`
   >

---

## 🚀 Features

- Encapsulated student data using C++ classes
- Getter and setter methods for controlled access
- Modular design with separate header and source files
- CMake-based build system for cross-platform compatibility

---

## 📄 Sample Output

```
Student Name: Muhammad Raza
Roll Number: 101
Marks: 85 90 78

Updated Student Record:
Student Name: M. Raza
Roll Number: 202
Marks: 88 92 95
```

---

## 📚 Future Enhancements

- Support for multiple student records
- Average marks and grade calculation
- File I/O for persistent storage
- GUI or web-based interface

---

## 👨‍💻 Author

**Muhammad Raza**
Passionate about C++, algorithms, and polished workflows.

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).
