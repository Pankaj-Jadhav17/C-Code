#include<iostream>
using namespace std;
int main(){
    /*Loops in C++
    There are three types in loops in c++
       1.For loop
       2.While loop
       3.Do-while loop
    */
   /*For loop in c++*/
//    int i=1;
//    cout<<i;
//    i++;

//for (initialization;condition;updation)
// {
//     loop body(c++ code);
// }

//Example of infinite loop
// for(int i=1; 34<=40;i++)
// {
//     cout<<i<<endl;
// }

// for(int i=1; i<=40;i++)
// {
//     cout<<i<<endl;
// }

// syntax of while loop 
//  while (condition)
//  {
//     /* code */
//  }
 

//Pirnt 1 to 40 using while loop 
    // int i=1;
    //  while (i<=40)
    //  {
    //     cout<<i<<endl;
    //     i++;
    //  }

     //Example of infinite loop
    //  int i=1;
    //  while (true)
    //  {
    //     cout<<i<<endl;
    //     i++;
    //  }

    // syntax of do-while loop 
//  do
//  {
//     /* code */

//  }while(condition)


//Pirnt 1 to 40 using while loop 
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=40);
    

     //Example of infinite loop
    //  int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (false);
   return 0;
}