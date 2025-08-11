#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Book.h"
#include "User.h"
#include "Transaction.h"

class Library {
private:
    std::vector<Book*> books;
    std::vector<User*> users;
    std::vector<Transaction> transactions;

public:
    ~Library();  // Destructor

    void addBook(Book* book);
    void addUser(User* user);

    Book* findBook(const std::string& isbn);
    User* findUser(int id);

    bool borrowBook(int userId, const std::string& isbn);
    bool returnBook(int userId, const std::string& isbn);

    void showAllBooks() const;
    void showAllUsers() const;
    void showTransactions() const;
};