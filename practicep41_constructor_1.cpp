#include <iostream>
using namespace std;

class Rectangle{
    int a,b;
    public:
    Rectangle(int x=10,int y=12){//default initializing
        a=x;
        b=y;
    }
    Rectangle(Rectangle &obj){
        a=obj.a;
        b=obj.b;
    }
    int area(){
        return a*b;
    };
};

int main(){
    Rectangle R1;
    cout<<"Area: "<<R1.area();
    cout<<endl;
    Rectangle R2(5,8); //initializing
    cout<<"new Area: "<<R2.area();
    cout<<endl;

    //copy constructor;
    Rectangle R3(R1);
    cout<<"new Area: "<<R3.area();


}