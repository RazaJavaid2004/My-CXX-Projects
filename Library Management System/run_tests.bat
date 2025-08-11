@echo off
REM === Set path to MSYS2 UCRT64 toolchain ===
SET "GPP=C:\msys64\ucrt64\bin\g++.exe"

REM === Compile test suite ===
echo Compiling librarytests.cpp...
"%GPP%" -Iinclude tests/LibraryTests.cpp src/Book.cpp src/User.cpp src/Transaction.cpp src/Library.cpp -o build/LibraryTests.exe -std=c++17 -lgtest -lgtest_main -pthread

IF %ERRORLEVEL% NEQ 0 (
    echo ❌ Compilation failed.
    EXIT /B %ERRORLEVEL%
)

REM === Run the tests ===
echo Running LibraryTests.exe...
start /wait build/LibraryTests.exe

pause