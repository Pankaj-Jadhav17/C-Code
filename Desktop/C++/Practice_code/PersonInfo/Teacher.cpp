#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string name, int age, string subject, double salary)
    : Person(name, age), subject(subject), salary(salary) {
    cout << "[Teacher] Constructor called for: " << subject << " teacher" << endl;
}

Teacher::~Teacher() {
    cout << "[Teacher] Destructor called for: " << getName() << endl;
    // Note: private members of Person are not accessible here directly
    // use getName() getter instead
}

string Teacher::getSubject() { return subject; }
double Teacher::getSalary()  { return salary;  }

void Teacher::display() {
    cout << "--- Teacher Info ---" << endl;
    showBasicInfo();   // protected method from Person
    cout << "  Subject : " << subject << endl;
    cout << "  Salary  : Rs. " << salary << endl;
}

void Teacher::giveRaise(double percent) {
    double raise = salary * (percent / 100.0);
    salary += raise;
    cout << getName() << " got a raise of Rs." << raise
         << " | New salary: Rs." << salary << endl;
}