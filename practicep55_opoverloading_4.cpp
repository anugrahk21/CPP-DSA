#include <iostream>
using namespace std;

class sum{
    public:
    int a,b;
    sum(){
        b=50;
    };
    void set_a(){
        cout<<"Enter a: ";
        cin>>a;
    };

    int operator+(sum s1){
        return(a+s1.b);
    };
};

int main(){
    sum z1,z2;
    z1.set_a();
    int d=z1+z2;
    cout<<"sum: "<<d;

}