#include "bookShelf.h"
#include <iostream>
#include <limits>
#include <vector>

int main() {
    RecursiveBookCount shelf;
    int shelfWidth = 100; // Default shelf width
    std::vector <int> books;
    
    char choice;
    do {
        shelf.welcomeScreen();
        shelf.inputDataInWidth(shelfWidth, books);
        int count = shelf.countBooks(shelfWidth, books, 0);
        std::cout << "Maximum number of books that can fit on the shelf: " << count << " books \n";

        std::cout << "Do You Want To Try Again (Y/N): ";
        std::cin >> choice;
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            std::cout << "Invalid input! Please enter Y or N: ";
            std::cin >> choice;
        }
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Exiting... \n";

    return 0;
}