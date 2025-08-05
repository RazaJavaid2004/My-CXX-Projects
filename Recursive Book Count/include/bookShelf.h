#pragma once
#include <vector>

class RecursiveBookCount {
    public:
    void setColor(int color);
    void welcomeScreen();
    int countBooks(int shelfWidth, std::vector<int>& books, int index);
    void inputDataInWidth(int& shelfWidth, std::vector <int>& books);
};