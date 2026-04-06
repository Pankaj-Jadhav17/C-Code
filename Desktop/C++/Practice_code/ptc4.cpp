//operators in c++
#include<iostream>
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"operators in C++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    //Arithmatic operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //Assignment Operator --> used to assign values to variables
    //int a=3, b=9;
    //char ch='o';

    //Coparison operators
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    //logical ooperator
    cout<<"The value of logical operator ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of logical operator ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl;
    cout<<"The value of logcal operator (!(a==b)) is "<<(!(a==b))<<endl;
     
    return 0;
}

