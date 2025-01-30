#include <iostream>
using namespace std;

// program to demonstrate the concept of early binding and late binding in c++

class Base{
    public:
    void printBase(){
        cout<<"Printing message in base class."<<endl;
    };
    virtual void show(){
        cout<<"show() of base class"<<endl;
    }
};

class Derived:public Base{
    public:
    void printDerived(){
        cout<<"Printing message in derived class."<<endl;
    };
    void show(){
        cout<<"show() of derived class"<<endl;
    };
};

int main(){
    Base *bptr; // base class
    Base b;
    bptr=&b; //base pointer can point to base class
    cout<<"bptr points to base objects"<<endl;
    bptr->show();

    Derived *dptr;
    Derived d;
    bptr=&d; //base pointer can point to derived
    cout<<"bptr points to derived objects"<<endl;
    //bptr->printDerived();  base pointer cannot access specific members of derived class directly (error)
    //bptr->printBase();  base pointer cannot access specific members of base class directly (error)
    bptr->show(); //base pointer can assess the common members in base and derived class,
    //show() of base is called due to early binding of derived class

    dptr=&d; //
    dptr->show(); //
    dptr->printDerived();
    ((Derived*)bptr)->show();
    ((Derived*)bptr)->printDerived();
}

