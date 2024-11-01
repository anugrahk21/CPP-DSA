#include <iostream>
using namespace std;

//Friend function to subtract objects of class abc (operator overload)

class abc{
    private:
    int x;
    int y;
    int z;
    public:
    abc(int x, int y, int z){
        this->x=x;
        this->y=y;
        this->z=z;

    };
    void display(){
        cout<<x<<" ";
        cout<<y<<" ";
        cout<<z<<" "<<endl;
    };
    friend void operator-(abc &obj);
};
void operator-(abc &obj){
    obj.x=-obj.x;
    obj.y=-obj.y;
    obj.z=-obj.z;
};

int main(){
    abc obj(10,20,30);
    cout<<"Before operator: ";
    obj.display();
    cout<<endl;
    -obj;
    cout<<"After operator: ";
    obj.display();
    cout<<endl;
    return 0;
}