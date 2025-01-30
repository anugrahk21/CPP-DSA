#include <iostream>
using namespace std;

class Complex{
    public:
    float x,y;
    Complex(){
        x=0.0;
        y=0.0;
    };

    Complex(float a,float b){
        x=a;
        y=b;
    };

    Complex operator+(Complex obj1){
        Complex temp;
        temp.x=x+obj1.x;
        temp.y=y+obj1.y;
        return temp;
    }
};

int main(){
    Complex C1(2.5,3.2),C2(1.0,6.9),C3;
    C3=C1+C2;
    cout<<"Added X:"<<C3.x<<"Added y: "<<C3.y<<endl;
}