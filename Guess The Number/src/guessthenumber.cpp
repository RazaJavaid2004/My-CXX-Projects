#include <iostream>
#include <fstream>
#include <random>
#include <limits>
#include <windows.h>
#include <chrono>
#include "guessthenumber.h"
using namespace std;

void GuessTheNumber :: setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void GuessTheNumber :: welcomeScreen() {
    setColor(11);   // light cyan
    cout << "============================\n";
    cout << "     Guess the Number!\n";
    cout << "         by Raza\n";
    cout << "============================\n\n";
    setColor(7);    // reset
}

void GuessTheNumber :: updateLeaderBoard(int attempts, double duration) {
    ofstream file("leaderBoard.txt", ios :: app);
    if(file.is_open()) {
        file << "Attempts: " << attempts << " | Duration: " << duration << "s \n";
        file.close();
    }
}

void GuessTheNumber :: selectDifficulty(int& low, int& high) {
    cout << "Enter Difficulty: \n";
    cout << "1- Easy Mode \n";
    cout << "2- Medium Mode \n";
    cout << "3- Hard Mode \n";
    cout << "4- Custom Mode \n";
    cout << "Note: Default Mode is Medium... \n";
    
    int choice;
    cout << "Choice: ";
    cin >> choice;

    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits <streamsize> :: max(), '\n');
        cout << "Invalid Choice! Default Difficulty is Medium... \n";
    }

    switch(choice) {
        case 1:
            high = 50;
            cout << "Easy Mode Selected... \n";
            break;
        case 2:
            high = 100;
            cout << "Normal Mode Selected... \n";
            break;
        case 3:
            high = 1000;
            cout << "Hard Mode Selected... \n";
            break;
        case 4:
            int lower, upper;
            cout << "Enter the Starting Number: ";
            cin >> lower;

            cout << "Enter the Ending Number: ";
            cin >> upper;

            low = lower;
            high = upper;
            
            break;
        default:
            cout << "Default Mode Selected... \n";  // low = 1, high = 100 in main function;
    }
}

void GuessTheNumber :: giveHint(int target) {
    cout << "Hint: The Number is ";

    if(target % 2 == 0) cout << "Even \n";
    else cout << "Odd \n";

    for(int i = 3; i <= 7; i += 2) {
        if(target % i == 0) {
            cout << "and is Divisible by " << i << ".\n";
            break;
        }
    }
}

void GuessTheNumber :: victoryArt() {
    setColor(9);
    cout << "\n";
    cout << R"(
  ____   ___  _   _  ____ _____  _    _  ____  __     __
 |  _ \ / _ \| \ | |/ ___|_   _|/ \  | |/ ___| \ \   / /
 | | | | | | |  \| | |     | | / _ \ | | |      \ \ / / 
 | |_| | |_| | |\  | |___  | |/ ___ \| | |___    \ V /  
 |____/ \___/|_| \_|\____| |_/_/   \_\_|\____|    \_/   
)";
    cout << "\nCongratulations! You're a number ninja!\n";
}

void GuessTheNumber :: playGame(int& low, int& high) {
    int originalNum;
    int guessedNum;
    int attempts = 0;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> distrib(low, high);

    originalNum = distrib(gen);

    cout << "I am thinking of a Number between " << low << " and " << high << ".\n";

    auto startTime = chrono :: steady_clock :: now();

    while(true) {
        cout << "Enter Your Guess: ";
        cin >> guessedNum;

        if(cin.fail() || guessedNum < low || guessedNum > high) {
            cin.clear();
            cin.ignore(numeric_limits <streamsize> :: max(), '\n');
            cout << "Invalid Guess! Please Guess The Number Between " << low << " and " << high << ".\n";
            continue;
        }

        attempts++;
        cout << "Your Guess: " << guessedNum << "\n";

        if(guessedNum < originalNum) {
            setColor(14);   // yellow
            cout << "Too Low...\n";
        }
        else if(guessedNum > originalNum) {
            setColor(12);   // red
            cout << "Too High...\n";
        }
        else {
            setColor(10);   // green
            auto endTime = chrono :: steady_clock :: now();

            double duration = chrono :: duration <double> (endTime - startTime).count();

            cout << "Congratulations! You Guessed The Number " << originalNum << " in " << attempts << " attempts.\n";
            victoryArt();

            updateLeaderBoard(attempts, duration);

            setColor(7);    // reset

            break;
        }

        setColor(7);     // reset
        if(attempts == 5) giveHint(originalNum);
    }
}