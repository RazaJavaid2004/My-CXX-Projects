#include <iostream>
#include <vector>
#include <limits>
#include "arraySorter.h"
using namespace std;

void ArraySorter :: inputNumbers() {
    int n;
    do {
        cout << "Enter the Size of the Array: ";
        cin >> n;
        
        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits <streamsize> :: max(), '\n');
            cout << "Invalid Size! Please Enter a Positive Number! \n";
        }
    } while(n <= 0);
    
    nums.clear();        // Clear any existing values

    int num;
    cout << "Enter the Numbers: \n";
    
    for(int i = 0; i < n; ++i) {
        while(true) {
            cout << "Number " << i + 1 << ": ";
            cin >> num;
            if(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits <streamsize> :: max(), '\n');
                cout << "Invalid Input! Please Enter the Valid Integer! \n";
            }
            else break;
        }

        nums.push_back(num);
    }
    nums.resize(n);
}

// push Maximums to the right;
void ArraySorter :: bubbleSort() {
    int size = nums.size();
    if(size <= 1) return;
    for(int i = size - 1; i >= 1; --i) {    // start from right side;
        bool swapped = false;
        for(int j = 0; j < i; ++j) {        // right side is always sorted;
            if(nums[j] > nums[j + 1]) {     
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void ArraySorter :: display() {
    for(const auto& val : nums) cout << val << " ";
    cout << endl;
}