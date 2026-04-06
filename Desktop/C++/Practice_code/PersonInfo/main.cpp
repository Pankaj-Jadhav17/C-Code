#include "Student.h"
#include "Teacher.h"
#include <iostream>
using namespace std;

int main() {
    cout << "===== Creating objects =====" << endl;
    Student s1("Riya",   20, 101, 8.5);
    Student s2("Arjun",  21, 102, 7.2);
    Teacher t1("Dr. Shah", 45, "Mathematics", 75000.0);

    cout << "\n===== Displaying info =====" << endl;
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    t1.display();

    cout << "\n===== Using getters =====" << endl;
    cout << s1.getName() << "'s GPA: " << s1.getGpa() << endl;
    // s1.name  <-- ERROR: private! cannot access directly
    // s1.showBasicInfo() <-- ERROR: protected! cannot call from outside

    cout << "\n===== Teacher raise =====" << endl;
    t1.giveRaise(10);
    t1.display();

    cout << "\n===== Scope ends — destructors run =====" << endl;
    return 0;
    // Order: ~t1 (Teacher then Person), ~s2 (Student then Person), ~s1 (Student then Person)
}