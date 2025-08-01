#include <iostream>
#include <limits>
#include "boxOfNumbers.h"
using namespace std;

void boxOfNumbers :: inputNumbers() {
    int n;
    
    // ✅ Vector size validation
    do {
        cout << "Enter the size of the Vector (positive integer): ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid size. Please enter a positive integer.\n";
        }
    } while (n <= 0);

    int num;
    sum = 0;
    nums.clear(); // Clear any existing values

    cout << "Enter the Numbers:\n";
    for (int i = 0; i < n; ++i) {
        while (true) {
            cout << "Number " << i + 1 << ": ";
            cin >> num;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid integer.\n";
            } else {
                break;
            }
        }
        nums.push_back(num);
        sum += num;
    }
    
    average = static_cast<double>(sum) / n;
}

int boxOfNumbers :: getSum() const {
    return sum;
}

double boxOfNumbers :: getAverage() const {
    return average;
}