// Add two complex numbers
#include<stdio.h>
struct structAdd
{
    double real;  //real number
    double img;   //imadinary number
};

int main()
{
    struct  structAdd c1;
    c1.real =20;
    c1.img = 30;
    struct  structAdd c2;
    c2.real = 5;
    c2.img = 2;
      struct structAdd c3;
      c3.real = c1.real+c2.real;
      c3.img = c1.img+c2.img;
      printf("sum of real no.=%lf\n sum of imaginary no.=%lf",c3.real,c3.img);
     // printf("%lf %lf",c3.real,c3.img);
      return 0;
}

