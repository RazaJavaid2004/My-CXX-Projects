@echo off
title My C++ App Launcher
echo =============================================
echo   Launching Recursive Book Count - Stand By...
echo =============================================

:: Optional cleanup step
if exist build\temp.txt del build\temp.txt

:: Launch the app and wait
start "Recursive Book Count" /wait build\RecursiveBookCount.exe

:: Log timestamp (just for fun or debugging)
echo Launched at: %date% %time% >> log.txt

echo -------------------------------------
echo   Execution completed successfully.
echo -------------------------------------
pause