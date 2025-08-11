#include "User.h"

User::User(std::string name, int id) : name(name), id(id) {}

std::string User::getName() const {
    return name;
}

int User::getId() const {
    return id;
}

const std::vector<Book*>& User::getBorrowedBooks() const {
    return borrowedBooks;
}

void User::borrowBook(Book* book) {
    if (!book || !book->isAvailable()) return;

    // Optional: prevent duplicate borrowing
    if (hasBorrowedBook(book)) return;

    borrowedBooks.push_back(book);
    book->borrowBook();
}

void User::returnBook(Book* book) {
    if (!book) return;

    auto it = std::find(borrowedBooks.begin(), borrowedBooks.end(), book);
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
        book->returnBook();
    }
}

bool User::hasBorrowedBook(Book* book) const {
    return std::find(borrowedBooks.begin(), borrowedBooks.end(), book) != borrowedBooks.end();
}

std::string User::toString() const {
    return "User: " + name + " [ID: " + std::to_string(id) + "]";
}

bool User::operator==(const User& other) const {
    return id == other.id;
}