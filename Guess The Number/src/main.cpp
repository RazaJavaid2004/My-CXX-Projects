#include <iostream>
#include <vector>
#include "guessthenumber.h"
using namespace std;

int main() {
    GuessTheNumber game;
    
    char choice;
    do {
        game.welcomeScreen();
        game.playGame();

        cout << "Do You Want To Play Again... (Y/N)\n";
        cin >> choice;
    } while(choice == 'Y' || choice == 'y');

    cout << "Thank You For Playing The Game!\n";

    return 0;
}