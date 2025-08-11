@echo off
REM === Set path to MSYS2 UCRT64 toolchain ===
SET "GPP=C:\msys64\ucrt64\bin\g++.exe"

REM === Compile main program ===
echo Compiling main.cpp...
"%GPP%" -Iinclude main.cpp src/Book.cpp src/User.cpp src/Transaction.cpp src/Library.cpp -o build/LibrarySystem.exe -std=c++17

IF %ERRORLEVEL% NEQ 0 (
    echo ❌ Compilation failed.
    EXIT /B %ERRORLEVEL%
)

REM === Run the program ===
echo Running Library Management System.exe...
start /wait build/LibrarySystem.exe

pause