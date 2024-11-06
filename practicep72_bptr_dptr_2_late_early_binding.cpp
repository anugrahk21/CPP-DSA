#include <iostream>
using namespace std;

//early and late bindings
//virtual function

class base{
    public:
    virtual void print(){
        cout<<"Base class"<<endl;
    };
    void show(){
        cout<<"This is base class show function"<<endl;
    };
};

class derived:public base{
    public:
    void print(){
        cout<<"Derived class"<<endl;
    };
    void show(){
        cout<<"This is derived class show function"<<endl;
    };
};

int main(){
    base* bptr;
    derived d;
    bptr=&d;
    bptr->print(); //prints Derived class
    bptr->show(); //prints This is derived class show function
}