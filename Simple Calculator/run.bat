@echo off
title My C++ App Launcher
echo =============================================
echo   Launching Simple Calculator - Stand By...
echo =============================================

:: Optional cleanup step
if exist build\temp.txt del build\temp.txt

:: Launch the app and wait
start "Simple Calculator" /wait build\SimpleCalculator.exe

:: Log timestamp (just for fun or debugging)
echo Launched at: %date% %time% >> log.txt

echo -------------------------------------
echo   Execution completed successfully.
echo -------------------------------------
pause