#include <iostream>
#include <random>
#include <limits>
#include "guessthenumber.h"
using namespace std;

void GuessTheNumber :: welcomeScreen() {
    cout << "============================\n";
    cout << "     Guess the Number!\n";
    cout << "         by Raza\n";
    cout << "============================\n\n";
}

void GuessTheNumber :: selectDifficulty(int& high) {
    cout << "Enter Difficulty: \n";
    cout << "1- Easy Mode \n";
    cout << "2- Medium Mode \n";
    cout << "3- Hard Mode \n";
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

void GuessTheNumber :: playGame(int& low, int& high) {
    int originalNum;
    int guessedNum;
    int attempts = 0;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> distrib(low, high);

    originalNum = distrib(gen);

    cout << "I am thinking of a Number between " << low << " and " << high << ".\n";

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

        if(guessedNum < originalNum) cout << "Too Low...\n";
        else if(guessedNum > originalNum) cout << "Too High...\n";
        else {
            cout << "Congratulations! You Guessed The Number " << originalNum << " in " << attempts << " attempts.\n";
            break;
        }

        if(attempts == 5) giveHint(originalNum);
    }
}