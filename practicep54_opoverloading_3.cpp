#include <iostream>
using namespace std;

//operator overloading to make a number positive
//function definition inside class and defining outside class

class Anu{
    private:
    int a, b;
    
    public:
    Anu(int x, int y){
        a = x;
        b = y;
    };

    Anu operator+();
    void display(){
        cout<<a<<" "<<b<<endl;
    };
};

Anu Anu::operator+(){ //making positive
    a=-a;
    b=-b;
};

int main(){
    Anu obj(-10,-20);
    obj.display();
    +obj;
    obj.display();
}