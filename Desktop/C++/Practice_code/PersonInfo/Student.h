#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"   // always include parent header

class Student : public Person {   // Student IS-A Person
private:
    int   rollNo;
    float gpa;

public:
    Student(string name, int age, int rollNo, float gpa);
    ~Student();

    // Getters
    int   getRollNo();
    float getGpa();

    void display();   // overrides Person::display()
};

#endif