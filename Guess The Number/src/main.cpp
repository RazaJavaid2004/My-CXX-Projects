#include <iostream>
#include <vector>
#include "guessthenumber.h"
using namespace std;

int main() {
    GuessTheNumber game;
    
    char choice;
    int low = 1;
    int high = 100;
    do {
        game.welcomeScreen();
        game.selectDifficulty(low, high);
        game.playGame(low, high);

        cout << "Do You Want To Play Again... (Y/N)\n";
        cin >> choice;
    } while(choice == 'Y' || choice == 'y');

    cout << "Thank You For Playing The Game!\n";

    return 0;
}