#include <iostream>
using namespace std;

//
class X{
    public:
    int a;
    void fun(int b){
        cout<<"The value pf b is: "<<b<<endl;
    }

};
int main(){
    //declare pointer to data member
    int X::*ptr1=&X::a;

    //declare pointer to member function
    void(X::*ptr2)(int)=&X::fun;

    X xobj;
    xobj.*ptr1=10;
    cout<<"The value of a is: "<<xobj.*ptr1<<endl;

    (xobj.*ptr2)(20);

}