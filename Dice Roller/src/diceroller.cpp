#include <random>
#include <iostream>
#include "diceroller.h"

int Dice :: rollDice(std::mt19937& gen, std::uniform_int_distribution<>& dist) {
    return dist(gen);   // Returns a Number between 1 and 6;
}
void Dice::welcomeScreen() {
    std::cout << "Welcome to the Dice Roller! \n";
}
void Dice :: playGame() {
    std::random_device rd;                       // Seed generator (non-deterministic if available);
    std::mt19937 gen(rd());                      // Mersenne Twister engine;
    std::uniform_int_distribution<> dist(1, 6);  // Uniform distribution in [1,6];

    char choice;
    do {
        std::cout << "Rolling the Dice...\n";
        int result = rollDice(gen, dist);
        std::cout << "You Rolled: " << result << "\n";
        
        std::cout << "Roll Again (Y/N): ";
        std::cin >> choice;
        while(choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            std::cout << "Invalid Input! Please Enter Y or N: ";
            std::cin >> choice;
        }
    } while(choice == 'Y' || choice == 'y');

    std::cout << "Thanks for Playing... \n";
}