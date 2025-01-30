#include <iostream>
using namespace std;

template <class T>

T swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
};

int main(){
    int a,b;
    cout<<"Enter a and  b: ";
    cin>>a>>b;
    cout<<"Original a: "<<a<<endl;
    cout<<"Original b: "<<b<<endl;
    swapp(a,b);
    cout<<"New a: "<<a<<endl;
    cout<<"New b: "<<b<<endl;
}