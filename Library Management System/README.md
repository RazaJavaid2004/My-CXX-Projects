# 📚 Library Management System

A modular C++ Library Management System built with clean architecture, pointer-based ownership,
and full unit test coverage using Google Test.

---

## 🚀 Features

- Add and manage books and users
- Borrow and return books with transaction logging
- View library inventory, user activity, and transaction history
- Robust CLI interface with error handling
- Unit tests for all core operations and edge cases

## 🛠️ Project Structure

```
LibraryManagementSystem/
├── include/
│   ├── Library.h
│   ├── User.h
│   ├── Book.h
│   └── Transaction.h
│
├── src/
│   ├── Library.cpp
│   ├── User.cpp
│   ├── Book.cpp
│   └── Transaction.cpp
│
├── main.cpp
├── CMakeLists.txt
├── run_main.bat
├── run_test.bat
├── README.md
└── build/         # Contains generated build files and binaries
```

## ⚙️ Build & Run (Windows CMD with MSYS2 UCRT64)

### ✅ Run Main Program

```bat
run_main.bat
```

Compiles and runs `main.cpp` using MSYS2's UCRT64 toolchain.

### ✅ Run Unit Tests

```bat
run_tests.bat
```

Compiles and runs `librarytests.cpp` with Google Test.

> Make sure MSYS2 is installed at `C:\msys64` and `ucrt64\bin` is in your system PATH.

---

## 🧪 Build & Run (MSYS2 UCRT64 Shell)

### Run Main Program

```bash
bash run_main.sh
```

### Run Tests

```bash
bash run_tests.sh
```

## 📦 Requirements

- MSYS2 with UCRT64 environment
- g++ (C++17 or later)
- Google Test (`libgtest` and `libgtest_main`)
- pthread (included in MSYS2)

## 👨‍💻 Author

**Muhammad Raza**  
Persistent, methodical C++ developer focused on scalable architecture, clean memory management,
and professional-grade workflows.


## 🧠 Future Enhancements

- GUI interface using raylib or Qt
- Persistent storage (file or database)
- Role-based access (admin vs. user)
- Advanced search and filtering

## 📜 License

This project is open-source and free to use for educational or personal development purposes.