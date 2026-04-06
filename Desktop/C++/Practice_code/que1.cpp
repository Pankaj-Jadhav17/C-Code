#include<iostream>
struct Complex
{
    private:
    int a,b;
    public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        std::cout<<"The complex number is "<<a<<" + "<<b<<"i"<<std::endl;
    }
};
int main()
{
    system("clear");   //for linux and macOS
    // system("cls");   //for windows OS
    // Object of the class
    Complex c1; // c1 is an object of the class Complex
    c1.setData(3,4); // setting the value of a and b using the setData function
    c1.showData();
    getchar();  // to hold the output screen until user presses a key
}