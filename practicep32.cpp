#include <iostream>
using namespace std;

//this pointer

class Box{
    private:
    double length;
    double breadth;
    double height;

    public:
    Box(double x=1.0, double y=2.0, double z=3.0){
        cout<<"Constructor called"<<endl;
        length=x;
        breadth=y;
        height=z;
    }
    double volume(){
        return length*breadth*height;
    }
    int compare(Box box){
        return this->volume()>box.volume();
    }

};

int main(void){
    Box b1(2.0, 3.0, 4.0);
    Box b2(1.0, 2.0, 3.0);
    cout<<"Volume of b1: "<<b1.volume()<<endl;
    cout<<"Volume of b2: "<<b2.volume()<<endl;
    if(b1.compare(b2)){
        cout<<"b1 is larger than b2"<<endl;
    }
    else{
        cout<<"b2 is larger than b1"<<endl;
    }
}