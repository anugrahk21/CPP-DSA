#include <iostream>
using namespace std;

//program to demonstrate pure virtual function
//abstract class
//late binding or runtime polymorphism by using virtual function

class Sample{
    public:
    virtual void example()=0;
    void show(){
        cout<<"This is a pure virtual function from abstract class."<<endl;
    };
};

class Derived:public Sample{
    public:
    void example(){
        cout<<"This is the example function from derived class."<<endl;
    };
};

int main(){
    Sample *ptr;
    Derived d;
    ptr=&d;
    ptr->example();
    ptr->show();
    return 0;
}