#include <gtest/gtest.h>
#include "StudentRecordSystem.h"

TEST(StudentRecordSystemTest, Initialization) {
    StudentRecordSystem student("Raza", 42, {90, 85, 88});
    EXPECT_EQ(student.getName(), "Raza");
    EXPECT_EQ(student.getRollNumber(), 42);
    EXPECT_EQ(student.getMarks().size(), 3);
    EXPECT_EQ(student.getMarks()[0], 90);
}

TEST(StudentRecordSystemTest, SettersWork) {
    StudentRecordSystem student("Ali", 1, {70, 75});
    student.setName("Zain");
    student.setRollNumber(99);
    student.setMarks({80, 85, 90});

    EXPECT_EQ(student.getName(), "Zain");
    EXPECT_EQ(student.getRollNumber(), 99);
    EXPECT_EQ(student.getMarks()[2], 90);
}