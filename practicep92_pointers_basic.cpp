#include <iostream>
using namespace std;

//understanding all the concepts of pointers

int main() {
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl; //this gives the value of a
    cout << "Address of a: " << &a << endl; //this gives the address of a
    cout << "Value of p: " << p << endl; //this gives the address of a as p is pointing to a
    cout << "Address of p: " << &p << endl; //this gives the address of p which is a pointer and 
                                            //stores the address of a and is different from the address of a
    cout << "Value of *p: " << *p << endl; //this gives the value of a as p is pointing to a

    //pointer to pointer
    int **q = &p;
    cout << "Value of q: " << q << endl; //this gives the address of p as q is pointing to p
    cout << "Address of q: " << &q << endl; //this gives the address of q which is a pointer and 
                                            //stores the address of p and is different from the address of p
    cout << "Value of *q: " << *q << endl; //this gives the address of a as *q is pointing to p and p is pointing to a
    cout << "Value of **q: " << **q << endl; //this gives the value of a as **q is pointing to p and p is pointing to a
    return 0;
}