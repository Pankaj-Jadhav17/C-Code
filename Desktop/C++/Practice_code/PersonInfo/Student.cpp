#include "Student.h"
#include <iostream>
using namespace std;

// KEY: colon syntax calls Person constructor FIRST
Student::Student(string name, int age, int rollNo, float gpa)
    : Person(name, age), rollNo(rollNo), gpa(gpa) {
    cout << "[Student] Constructor called for roll: " << rollNo << endl;
}

Student::~Student() {
    // Person destructor runs automatically AFTER this
    cout << "[Student] Destructor called for roll: " << rollNo << endl;
}

int   Student::getRollNo() { return rollNo; }
float Student::getGpa()    { return gpa;    }

void Student::display() {
    cout << "--- Student Info ---" << endl;
    showBasicInfo();   // calling protected method from parent — this works!
    cout << "  Roll No : " << rollNo << endl;
    cout << "  GPA     : " << gpa    << endl;
}