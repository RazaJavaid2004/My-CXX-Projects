#include "Transaction.h"

Transaction::Transaction(std::string action, std::string bookTitle, std::string userName)
    : action(action), bookTitle(bookTitle), userName(userName), timeStamp(std::time(nullptr)) {}

std::string Transaction::getSummary() const {
    std::ostringstream oss;
    std::string timeStr = std::ctime(&timeStamp);
    timeStr.pop_back();  // Remove trailing newline

    oss << "[" << timeStr << "] " << userName << " " << action
        << " \"" << bookTitle << "\"\n";

    return oss.str();
}