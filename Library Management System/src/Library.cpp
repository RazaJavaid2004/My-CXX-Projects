#include "Library.h"

// Destructor to clean up memory
Library::~Library() {
    for (auto* book : books) delete book;
    for (auto* user : users) delete user;
}

void Library::addBook(Book* book) {
    if (book) books.push_back(book);
}

void Library::addUser(User* user) {
    if (user) users.push_back(user);
}

Book* Library::findBook(const std::string& isbn) {
    for (auto* book : books)
        if (book->getISBN() == isbn)
            return book;
    return nullptr;
}

User* Library::findUser(int id) {
    for (auto* user : users)
        if (user->getId() == id)
            return user;
    return nullptr;
}

bool Library::borrowBook(int userId, const std::string& isbn) {
    User* user = findUser(userId);
    Book* book = findBook(isbn);
    if (!user || !book || !book->isAvailable()) return false;

    user->borrowBook(book);
    transactions.emplace_back("borrowed", book->getTitle(), user->getName());
    return true;
}

bool Library::returnBook(int userId, const std::string& isbn) {
    User* user = findUser(userId);
    Book* book = findBook(isbn);
    if (!user || !book || book->isAvailable()) return false;
    if (!user->hasBorrowedBook(book)) return false;

    user->returnBook(book);
    transactions.emplace_back("returned", book->getTitle(), user->getName());
    return true;
}

void Library::showAllBooks() const {
    std::cout << "\n📚 Books in Library:\n";
    if (books.empty()) {
        std::cout << "No books available.\n";
        return;
    }
    for (const auto* book : books) {
        std::cout << book->toString() << "\n";
    }
}

void Library::showAllUsers() const {
    std::cout << "\n👤 Users:\n";
    if (users.empty()) {
        std::cout << "No users registered.\n";
        return;
    }
    for (const auto* user : users) {
        std::cout << user->toString()
                  << ", Borrowed Books: " << user->getBorrowedBooks().size() << "\n";
        for (const auto* book : user->getBorrowedBooks()) {
            std::cout << "   - " << book->getTitle() << "\n";
        }
    }
}

void Library::showTransactions() const {
    std::cout << "\n📈 Transaction History:\n";
    if (transactions.empty()) {
        std::cout << "No transactions recorded.\n";
        return;
    }
    for (const auto& transaction : transactions) {
        std::cout << transaction.getSummary();
    }
}