#include <iostream>
#include "arraySorter.h"

int main() {
    ArraySorter game;

    char choice;
    do {
        game.inputNumbers();

        std :: cout << "Current Array: ";
        game.display();

        game.bubbleSort();

        std :: cout << "Sorted Array: ";
        game.display();

        std :: cout << "Do You Want To Play The Game Again... (Y/N) \n";
        std :: cin >> choice;
    } while(choice == 'Y' || choice == 'y');

    std :: cout << "Thank You For Playing The Game! \n";

    return 0;
}