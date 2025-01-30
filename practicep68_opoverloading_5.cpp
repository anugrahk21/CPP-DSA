#include  <iostream>
using namespace std;

class Complex{
    int x,y;
    public:
    Complex(){
        x=10;
        y=20;
    }
    Complex(int x,int y){
        this->x=x;
        this->y=y;
    };

    Complex operator+(Complex &c){
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    };

    void show(){
        cout<<x<<"+i"<<y<<endl;
    };
};

int main(){
    Complex C1(10,20);
    Complex C2(30,40);
    Complex C3;
    C3=C1+C2;
    C3.show();
};