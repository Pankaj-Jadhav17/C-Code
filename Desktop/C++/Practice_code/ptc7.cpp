#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //Manipulaters

    int a=3, b = 78, c= 1234;
     cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;

    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;


    //Operator Precedence
    // int a =3, b =5
    // // int c=(a*5)+b
    // int c=((((a*5)+b)-45)+87);
    // cout<<c;
    //  return 0;
}