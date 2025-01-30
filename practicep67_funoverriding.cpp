#include <iostream>
using namespace std;

//function OVERRIDING

class A{
    public:
    int add(int a,int b){
        int c=a+b;
        cout<<c<<endl;
    }
    
};

class B:public A{
    public:
    int add(int a,int b){
        int c=a+b+10;
        cout<<c<<endl;
    }
};

int main(){
    B b;
    b.add(1,2);
    b.A::add(1,2);

}