#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    Teacher(string name, int age, string subject, double salary);
    ~Teacher();

    string getSubject();
    double getSalary();

    void display();
    void giveRaise(double percent);   // increases salary by percent
};

#endif