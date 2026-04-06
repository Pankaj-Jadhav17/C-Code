//if-else and control structures
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age:"<<endl;
    cin>>age;

    //1.Selection control structure: If-else ,else-if else:
    // if ((age<18) && (age>0)){
    //     cout<<"You can not come my party:"<<endl;
    // }
    // else if(age == 0){
    //     cout<<"you are a kid and you will get a kid pass to the party:"<<endl;
    // } 
    // else if(age<1){
    //     cout<<"you are not yet born"<<endl;
    // } 
    // else //if(age>18)
    // {
    //     cout<<"you are come my party:"<<endl;
    // }


    //2.Selection control structure: Switch case statements
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 18"<<endl;
        break;
    case 2:
        cout<<"You are 18"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch cases"<<endl;
    return 0;
}