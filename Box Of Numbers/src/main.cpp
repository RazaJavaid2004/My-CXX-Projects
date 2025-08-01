#include <iostream>
#include "boxOfNumbers.h"
using namespace std;

int main() {
    boxOfNumbers box;
    
    char choice;
    do {
        box.inputNumbers();
        cout << "Sum: " << box.getSum() << endl;
        cout << "Average: " << box.getAverage() << endl;

        cout << "Do You Want To Play Again... (Y/N)\n";
        cin >> choice;
    } while(choice == 'Y' || choice == 'y');
    
    cout << "Thank You for Playing the Game...\n";
    cout << "Exiting...\n";
    
    return 0;
}