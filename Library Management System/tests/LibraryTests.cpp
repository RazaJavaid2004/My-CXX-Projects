#include <gtest/gtest.h>
#include "Library.h"

// Fixture for Library tests
class LibraryTest : public ::testing::Test {
protected:
    Library lib;

    void SetUp() override {
        lib.addBook(new Book("1984", "George Orwell", "123"));
        lib.addBook(new Book("Brave New World", "Aldous Huxley", "456"));
        lib.addUser(new User("Alice", 1));
        lib.addUser(new User("Bob", 2));
    }
};

// 1. Adding Books
TEST_F(LibraryTest, AddValidBook) {
    Book* book = new Book("Fahrenheit 451", "Ray Bradbury", "789");
    lib.addBook(book);
    EXPECT_EQ(lib.findBook("789"), book);
}

TEST_F(LibraryTest, AddNullBook) {
    lib.addBook(nullptr);
    EXPECT_EQ(lib.findBook("999"), nullptr);
}

TEST_F(LibraryTest, AddDuplicateISBN) {
    Book* duplicate = new Book("Duplicate", "Author", "123");
    lib.addBook(duplicate);
    // Still returns the first one
    EXPECT_EQ(lib.findBook("123")->getTitle(), "1984");
}

// 2. Adding Users
TEST_F(LibraryTest, AddValidUser) {
    User* user = new User("Charlie", 3);
    lib.addUser(user);
    EXPECT_EQ(lib.findUser(3), user);
}

TEST_F(LibraryTest, AddNullUser) {
    lib.addUser(nullptr);
    EXPECT_EQ(lib.findUser(999), nullptr);
}

TEST_F(LibraryTest, AddDuplicateUserID) {
    User* duplicate = new User("Imposter", 1);
    lib.addUser(duplicate);
    // Still returns the first one
    EXPECT_EQ(lib.findUser(1)->getName(), "Alice");
}

// 3. Finding Books
TEST_F(LibraryTest, FindBookValidISBN) {
    EXPECT_NE(lib.findBook("123"), nullptr);
}

TEST_F(LibraryTest, FindBookInvalidISBN) {
    EXPECT_EQ(lib.findBook("999"), nullptr);
}

// 4. Finding Users
TEST_F(LibraryTest, FindUserValidID) {
    EXPECT_NE(lib.findUser(1), nullptr);
}

TEST_F(LibraryTest, FindUserInvalidID) {
    EXPECT_EQ(lib.findUser(999), nullptr);
}

// 5. Borrowing Books
TEST_F(LibraryTest, BorrowValidBook) {
    EXPECT_TRUE(lib.borrowBook(1, "123"));
    EXPECT_FALSE(lib.findBook("123")->isAvailable());
}

TEST_F(LibraryTest, BorrowAlreadyBorrowedBook) {
    lib.borrowBook(1, "123");
    EXPECT_FALSE(lib.borrowBook(2, "123"));
}

TEST_F(LibraryTest, BorrowWithInvalidUserID) {
    EXPECT_FALSE(lib.borrowBook(999, "123"));
}

TEST_F(LibraryTest, BorrowWithInvalidISBN) {
    EXPECT_FALSE(lib.borrowBook(1, "999"));
}

// 6. Returning Books
TEST_F(LibraryTest, ReturnValidBook) {
    lib.borrowBook(1, "123");
    EXPECT_TRUE(lib.returnBook(1, "123"));
    EXPECT_TRUE(lib.findBook("123")->isAvailable());
}

TEST_F(LibraryTest, ReturnBookNotBorrowedByUser) {
    lib.borrowBook(1, "123");
    EXPECT_FALSE(lib.returnBook(2, "123"));
}

TEST_F(LibraryTest, ReturnWithInvalidUserID) {
    EXPECT_FALSE(lib.returnBook(999, "123"));
}

TEST_F(LibraryTest, ReturnWithInvalidISBN) {
    EXPECT_FALSE(lib.returnBook(1, "999"));
}

// 7. Showing Books
TEST_F(LibraryTest, ShowBooksNonEmpty) {
    testing::internal::CaptureStdout();
    lib.showAllBooks();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("1984"), std::string::npos);
}

TEST(LibraryEmptyTest, ShowBooksEmpty) {
    Library emptyLib;
    testing::internal::CaptureStdout();
    emptyLib.showAllBooks();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("No books"), std::string::npos);
}

// 8. Showing Users
TEST_F(LibraryTest, ShowUsersNonEmpty) {
    testing::internal::CaptureStdout();
    lib.showAllUsers();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Alice"), std::string::npos);
}

TEST(LibraryEmptyTest, ShowUsersEmpty) {
    Library emptyLib;
    testing::internal::CaptureStdout();
    emptyLib.showAllUsers();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("No users"), std::string::npos);
}

// 9. Showing Transactions
TEST_F(LibraryTest, ShowTransactionsNonEmpty) {
    lib.borrowBook(1, "123");
    testing::internal::CaptureStdout();
    lib.showTransactions();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("borrowed"), std::string::npos);
}

TEST(LibraryEmptyTest, ShowTransactionsEmpty) {
    Library emptyLib;
    testing::internal::CaptureStdout();
    emptyLib.showTransactions();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("No transactions"), std::string::npos);
}

// Edge Cases
TEST(LibraryEdgeCaseTest, BorrowWithNoBooks) {
    Library emptyLib;
    emptyLib.addUser(new User("Test", 1));
    EXPECT_FALSE(emptyLib.borrowBook(1, "123"));
}

TEST(LibraryEdgeCaseTest, ReturnWithNoBooks) {
    Library emptyLib;
    emptyLib.addUser(new User("Test", 1));
    EXPECT_FALSE(emptyLib.returnBook(1, "123"));
}

TEST(LibraryEdgeCaseTest, BorrowWithNoUsers) {
    Library emptyLib;
    emptyLib.addBook(new Book("Test Book", "Author", "123"));
    EXPECT_FALSE(emptyLib.borrowBook(1, "123"));
}

TEST(LibraryEdgeCaseTest, ReturnWithNoUsers) {
    Library emptyLib;
    emptyLib.addBook(new Book("Test Book", "Author", "123"));
    EXPECT_FALSE(emptyLib.returnBook(1, "123"));
}

// Main
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

//  g++ librarytests.cpp Book.cpp User.cpp Transaction.cpp Library.cpp -lgtest -lgtest_main -pthread -o librarytests 
// ./librarytests