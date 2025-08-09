#include <iostream>
#include "StudentRecordSystem.h"

int main() {
    // Create a student record
    StudentRecordSystem student("Muhammad Raza", 24175, {85, 90, 78});

    // Display initial details
    std::cout << "Student Name: " << student.getName() << "\n";
    std::cout << "Roll Number: " << student.getRollNumber() << "\n";
    std::cout << "Marks: ";
    for (int mark : student.getMarks()) {
        std::cout << mark << " ";
    }
    std::cout << "\n";

    // Modify details using setters
    student.setName("M. Raza");
    student.setRollNumber(138);
    student.setMarks({88, 92, 95});

    // Display updated details
    std::cout << "\nUpdated Student Record:\n";
    std::cout << "Student Name: " << student.getName() << "\n";
    std::cout << "Roll Number: " << student.getRollNumber() << "\n";
    std::cout << "Marks: ";
    for (int mark : student.getMarks()) {
        std::cout << mark << " ";
    }
    std::cout << "\n";

    return 0;
}