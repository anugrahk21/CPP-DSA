#include <iostream>
using namespace std;

//function call by value

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue function: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
};

//function call by references

void swapByRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByRef function: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
};

//function call by pointer/address

void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swapByPointer function: " << endl;
    cout << "a = " << *a << ", b = " << *b << endl;
};

int main(){
    int x = 10, y = 20;
    
    cout << "Before swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    
    //call by value
    swapByValue(x, y);
    
    //call by reference
    swapByRef(x, y);
    
    //call by pointer/address
    swapByPointer(&x, &y);
    
    cout << "After swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    
    return 0;
}