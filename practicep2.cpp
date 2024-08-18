//Area and the perimeter of a rectangle

#include <iostream>
using namespace std;

class Rectangle{
    public:
    int area(int l,int b){
        return l*b;
    }
    int peri(int l,int b){
        int j=2*(l+b);
        return j;
    }
    
};

int main(){
    Rectangle r;
    int l1,b1;
    cin>>l1>>b1;
    cout<<"Area: ";
    cout<<r.area(l1,b1)<<endl;
    cout<<"Perimeter: ";
    cout<<r.peri(l1,b1);
};