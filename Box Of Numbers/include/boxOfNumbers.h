#pragma once
#include <iostream>
#include <vector>
using namespace std;

class boxOfNumbers {
    vector <int> nums;
    int sum;
    double average;
    public:
    void inputNumbers();
    int getSum() const;
    double getAverage() const;
};