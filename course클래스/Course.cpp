#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity) {
    this->courseName = courseName;
    this->capacity = capacity;
    numberOfStudents = 0;
    students = new string[capacity];
}

Course::~Course() {
    delete[] students;
}

string Course::getCourseName() const {
    return courseName;
}

void Course::addStudent(const string& name) {
 
    students[numberOfStudents++] = name;
}

void Course::dropStudent(const string& name) {
    for (int i = 0; i < numberOfStudents; ++i) {
        if (students[i] == name) {
            for (int j = i; j < numberOfStudents - 1; ++j) {
                students[j] = students[j + 1];
            }
            --numberOfStudents;
            break;
        }
    }
}

string* Course::getStudents() const {
    return students;
}

int Course::getNumberOfStudents() const {
    return numberOfStudents;
}

void Course::clear() {
    delete[] students;
    students = new string[capacity];
    numberOfStudents = 0;
}
