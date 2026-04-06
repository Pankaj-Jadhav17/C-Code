#include "Person.h"
#include <iostream>
using namespace std;

// Initialiser list style (best practice)
Person::Person(string name, int age) : name(name), age(age) {
    cout << "[Person] Constructor called for: " << name << endl;
}

Person::~Person() {
    cout << "[Person] Destructor called for: " << name << endl;
}

void Person::showBasicInfo() {
    cout << "  Name : " << name << endl;
    cout << "  Age  : " << age  << endl;
}

string Person::getName() { return name; }
int    Person::getAge()  { return age;  }

void Person::display() {
    cout << "--- Person Info ---" << endl;
    showBasicInfo();
}