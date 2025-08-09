#pragma once
#include <string>
#include <vector>

class StudentRecordSystem {
    std::string name;
    int rollNumber;
    std::vector <int> marks;
    public:
    StudentRecordSystem(const std::string& name, int rollNumber, const std::vector<int>& marks);
    void setName(const std::string& newName);
    void setRollNumber(int newRollNumber);
    void setMarks(const std::vector<int>& newMarks);
    const std::string& getName() const;
    int getRollNumber() const;
    const std::vector<int>& getMarks() const;
};