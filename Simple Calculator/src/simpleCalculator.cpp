#include <iostream>
#include <limits>
#include "simpleCalculator.h"
using namespace std;

double SimpleCalculator::sum(int n1, int n2) const {
    return n1 + n2;
}

double SimpleCalculator::difference(int n1, int n2) const {
    return n1 - n2;
}

double SimpleCalculator::multiply(int n1, int n2) const {
    return n1 * n2;
}

double SimpleCalculator::divide(int n1, int n2) const {
    if(n2 != 0) {
        return static_cast<double>(n1) / n2;
    } else {
        cerr << "Error: Division by zero is not allowed. \n";
        return numeric_limits<double>::quiet_NaN(); // Return NaN for division by zero
    }
}

void SimpleCalculator::calculate() {
    while (true) {
        cout << "--------Main Menu---------- \n";
        cout << "1- Addition \n";
        cout << "2- Subtraction \n";
        cout << "3- Multiplication \n";
        cout << "4- Division \n";
        cout << "5- Exit \n";

        int choice;
        cout << "Enter Your Choice: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 5) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice! Please try again.\n";
            continue;
        }

        if (choice == 5) {
            cout << "Exiting... \n";
            return;
        }

        int n1, n2;
        cout << "Enter the First Number: ";
        cin >> n1;
        cout << "Enter the Second Number: ";
        cin >> n2;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter integers.\n";
            continue;
        }

        switch (choice) {
                case 1:
                    cout << "Sum: " << sum(n1, n2) << endl;
                    break;
                case 2:
                    cout << "Difference: " << difference(n1, n2) << endl;
                    break;
                case 3:
                    cout << "Product: " << multiply(n1, n2) << endl;
                    break;
                case 4:
                    cout << "Quotient: " << divide(n1, n2) << endl;
                    break;
            }
    }
}