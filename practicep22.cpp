#include <iostream>
using namespace std;

//pointers

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

    //Dangling Pointers
    int *ptr;
    {
        int v=23;
        ptr=&v;
        cout<<"Value is(inside block): "<<*ptr<<endl;
        cout<<"Address is(inside block): "<<ptr<<endl;
    }
    //still we are able to access
    cout<<"Value is(outside block): "<<*ptr<<endl;
    cout<<"Address is(outside block): "<<ptr<<endl;
    //to overcome this
    //we make ptr as NULL
    ptr=NULL;
    //*ptr=NULL will only make the value inside ptr as NULL not the pointer itself.

    //the below code wont print as ptr is NULL(no pointer)
    cout<<"value after null(outside block): "<<*ptr<<endl;
    cout<<"Address after null(outside block): "<<ptr<<endl;
    return 0;

}