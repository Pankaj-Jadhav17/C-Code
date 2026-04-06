//Pointer:
#include<iostream>
using namespace std;

int main(){
    //What is the pointer? --->data type which holds the address of other data types

    int a=4;
    int* b = &a;
    // & ----> address of operator 
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;

    // * ----> Dereference of operator
    cout<<"The value at address of b is: "<<*b<<endl;

    //Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address of c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<*c<<endl;

    return 0;
}