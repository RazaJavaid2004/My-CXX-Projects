#include "StudentRecordSystem.h"
#include <string>
#include <vector>

    StudentRecordSystem::StudentRecordSystem(const std::string& name, int rollNumber, const std::vector<int>& marks)
    : name(name), rollNumber(rollNumber), marks(marks) {}

    
    void StudentRecordSystem::setName(const std::string& newName) {
        name = newName;
    }

    void StudentRecordSystem::setRollNumber(int newRollNumber) {
        rollNumber = newRollNumber;
    }

    void StudentRecordSystem::setMarks(const std::vector<int>& newMarks) {
        marks = newMarks;
    }
    
    const std::string& StudentRecordSystem::getName() const {
        return name;
    }

    int StudentRecordSystem::getRollNumber() const {
        return rollNumber;
    }

    const std::vector<int>& StudentRecordSystem::getMarks() const {
        return marks;
    }