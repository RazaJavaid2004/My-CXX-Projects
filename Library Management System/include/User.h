#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include "Book.h"

class Book; // Forward declaration

class User {
private:
    std::string name;
    int id;
    std::vector<Book*> borrowedBooks;

public:
    User(std::string name, int id);

    std::string getName() const;
    int getId() const;
    const std::vector<Book*>& getBorrowedBooks() const;

    void borrowBook(Book* book);
    void returnBook(Book* book);
    bool hasBorrowedBook(Book* book) const;

    std::string toString() const;
    bool operator==(const User& other) const;
};