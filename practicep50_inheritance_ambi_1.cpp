#include <iostream>
using namespace std;

//Ambiguity in the multiple inheritance

class A1{
    public:
    void show_data(){
        cout<<"Class A1"<<endl;
    }
};

class A2{
    public:
    void show_data(){
        cout<<"Class A2"<<endl;
    }
};

class B: public A1, public A2{
    public:
    void show_data(){
        A1::show_data();
        A2::show_data();
        cout<<"Class B"<<endl;
    }
};

int main(){
    B obj;
    obj.show_data();
    //or
    obj.A1::show_data();
    obj.A2::show_data();
    return 0;
}