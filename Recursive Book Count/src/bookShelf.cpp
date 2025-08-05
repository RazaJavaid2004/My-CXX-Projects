#include <iostream>
#include <windows.h>
#include <limits>
#include <vector>
#include <algorithm>
#include "bookShelf.h"
using namespace std;

void RecursiveBookCount :: setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void RecursiveBookCount :: welcomeScreen() {
    setColor(8);   // blue
    cout << "============================\n";
    cout << "     Recursive Book Counter!\n";
    cout << "         by Raza\n";
    cout << "============================\n\n";
}

int RecursiveBookCount :: countBooks(int shelfWidth, vector<int>& books, int index) {
    // Base case: no more books or remaining width is too small
    if(index >= books.size() || shelfWidth < books[index]) return 0;

    // Include this book, reduce shelf width, and move to next book
    return 1 + countBooks(shelfWidth - books[index], books, index + 1);
}

void RecursiveBookCount :: inputDataInWidth(int& shelfWidth, vector <int>& books) {
    cout << "Enter the shelf width (positive integer): ";
    do {
        cin >> shelfWidth;
        if (cin.fail() || shelfWidth <= 0) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a positive integer: ";
        }
    } while (cin.fail() || shelfWidth <= 0);

    int numBooks;
    cout << "Enter Number of Books: ";
    do {
        cin >> numBooks;
        if (numBooks <= 0 || cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid
            cout << "Number of books must be greater than 0. Please enter again: ";
        }
    } while(cin.fail() || numBooks <= 0);

    books.resize(numBooks);

    cout << "Enter the widths of the books: \n";
    for (int i = 0; i < numBooks; ++i) {
        do {
            cin >> books[i];
            if (cin.fail() || books[i] <= 0) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid width for book " << (i + 1) << ". Please enter a positive integer: ";
            }
        } while (cin.fail() || books[i] <= 0);
    }

    // Sort book widths ascending to maximize book count
    sort(books.begin(), books.end());
}