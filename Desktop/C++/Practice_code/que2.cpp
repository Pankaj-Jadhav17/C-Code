#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setData(int x, int y); // declaration of the function setData
    void showData() // declaration of the function showData
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
void Complex::setData(int x, int y) // definition of the function setData
{                     //this function is outside the class but it is a member of the class Complex
    a=x;                //coresolution operator :: is used to define the function outside the class 
    b=y;
}
int main(int argc, char* argv[]) 
{
    Complex c1;
    c1.setData(3,4);
    c1.showData();
   getchar(); // to hold the output screen until user presses a key
}