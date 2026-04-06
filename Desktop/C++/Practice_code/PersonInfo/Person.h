#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

protected:
    // protected: derived classes CAN call this, outsiders cannot
    void showBasicInfo();

public:
    Person(string name, int age);   // constructor
    ~Person();                       // destructor

    // Getters (encapsulation — private data accessed via public methods)
    string getName();
    int getAge();

    void display();   // prints name + age
};

#endif