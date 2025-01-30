#include <iostream>
using namespace std;

//scope of class in try block

class Test{
    public:
    Test(){
        cout<<"Constructor called."<<endl;
    }
    ~Test(){
        cout<<"Destructor called."<<endl;
    }
};

int main(){
    try{
        Test t1;
        throw 10;
    }
    catch(int i){
        cout<<"Caught in main."<<endl;
        cout<<"Exception caught: "<<i<<endl;
    }
};