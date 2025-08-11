#include "Book.h"

Book::Book(std::string title, std::string author, std::string isbn)
    : title(title), author(author), isbn(isbn), available(true) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getISBN() const {
    return isbn;
}

bool Book::isAvailable() const {
    return available;
}

void Book::borrowBook() {
    available = false;
}

void Book::returnBook() {
    available = true;
}

void Book::setAvailability(bool status) {
    available = status;
}

std::string Book::toString() const {
    return title + " by " + author + " [ISBN: " + isbn + "] - " +
           (available ? "Available" : "Borrowed");
}

bool Book::operator==(const Book& other) const {
    return isbn == other.isbn;
}