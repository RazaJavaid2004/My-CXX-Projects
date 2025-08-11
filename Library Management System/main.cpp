#include <iostream>
#include "Library.h"
#include "Book.h"
#include "User.h"

int main() {
    Library library;

    // Initial data
    library.addBook(new Book("1984", "George Orwell", "123"));
    library.addBook(new Book("Brave New World", "Aldous Huxley", "456"));
    library.addUser(new User("Alice", 1));
    library.addUser(new User("Bob", 2));

    int choice;
    do {
        std::cout << "\n📚 Library Menu:\n";
        std::cout << "1. Show Books\n";
        std::cout << "2. Show Users\n";
        std::cout << "3. Borrow Book\n";
        std::cout << "4. Return Book\n";
        std::cout << "5. Show Transactions\n";
        std::cout << "6. Add Book\n";
        std::cout << "7. Add User\n";
        std::cout << "0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        if (choice == 1) {
            library.showAllBooks();
        } else if (choice == 2) {
            library.showAllUsers();
        } else if (choice == 3) {
            int userId;
            std::string isbn;
            std::cout << "User ID: ";
            std::cin >> userId;
            std::cout << "Book ISBN: ";
            std::cin >> isbn;
            if (!library.borrowBook(userId, isbn)) {
                std::cout << "❌ Borrowing failed. Check availability or user ID.\n";
            }
        } else if (choice == 4) {
            int userId;
            std::string isbn;
            std::cout << "User ID: ";
            std::cin >> userId;
            std::cout << "Book ISBN: ";
            std::cin >> isbn;
            if (!library.returnBook(userId, isbn)) {
                std::cout << "❌ Return failed. Check if user borrowed the book.\n";
            }
        } else if (choice == 5) {
            library.showTransactions();
        } else if (choice == 6) {
            std::string title, author, isbn;
            std::cout << "Book Title: ";
            std::cin.ignore(); std::getline(std::cin, title);
            std::cout << "Author: ";
            std::getline(std::cin, author);
            std::cout << "ISBN: ";
            std::getline(std::cin, isbn);
            library.addBook(new Book(title, author, isbn));
            std::cout << "✅ Book added.\n";
        } else if (choice == 7) {
            std::string name;
            int id;
            std::cout << "User Name: ";
            std::cin.ignore(); std::getline(std::cin, name);
            std::cout << "User ID: ";
            std::cin >> id;
            library.addUser(new User(name, id));
            std::cout << "✅ User added.\n";
        } else if (choice != 0) {
            std::cout << "⚠️ Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    std::cout << "\n👋 Exiting Library System. Goodbye!\n";
    return 0;
}