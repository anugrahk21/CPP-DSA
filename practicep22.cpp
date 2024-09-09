#include <iostream>
using namespace std;

int main(){
    int a=4;
    int *p=&a; //points to the value stored in the address of a
    //int *p
    //p=&a;
    cout<<a<<endl;
    cout<<&a<<endl; //prints the address.
    cout<<p<<endl; //prints the address same as &p.
    cout<<*p<<endl;
    *p=10;
    a=56;
    cout<<a<<endl; //prints 56.
    *p=6;
    cout<<a<<endl;
    cout<<*p<<endl; //prints 10.
    return 0;

}