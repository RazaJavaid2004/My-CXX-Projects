#pragma once
#include <string>
#include <sstream>
#include <ctime>

class Transaction {
private:
    std::string action;
    std::string bookTitle;
    std::string userName;
    time_t timeStamp;

public:
    Transaction(std::string action, std::string bookTitle, std::string userName);

    std::string getSummary() const;

    // Optional accessors
    std::string getAction() const { return action; }
    std::string getBookTitle() const { return bookTitle; }
    std::string getUserName() const { return userName; }
    time_t getTimeStamp() const { return timeStamp; }
};