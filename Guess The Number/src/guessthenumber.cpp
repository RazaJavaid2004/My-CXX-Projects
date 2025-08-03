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

void GuessTheNumber :: playGame() {
    int originalNum;
    int guessedNum;
    int attempts = 0;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> distrib(1, 100);

    originalNum = distrib(gen);

    cout << "I am thinking of a Number between 1 and 100.\n";

    while(true) {
        cout << "Enter Your Guess: ";
        cin >> guessedNum;

        if(cin.fail() || guessedNum < 1 || guessedNum > 100) {
            cin.clear();
            cin.ignore(numeric_limits <streamsize> :: max(), '\n');
            cout << "Invalid Guess! Please Guess The Number Between 1 and 100.\n";
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