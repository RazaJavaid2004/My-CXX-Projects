#pragma once
#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;

public:
    Book(std::string title, std::string author, std::string isbn);

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    bool isAvailable() const;

    void borrowBook();
    void returnBook();
    void setAvailability(bool status);

    std::string toString() const;

    bool operator==(const Book& other) const;
};