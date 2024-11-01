#include <iostream>
using namespace std;

//Resolving the ambiguity of hybrid class using virtual class/path.

//             A class
//             /    \
//             BA1    BA2
//              \    /
//                 B


class A{ //grandparent class
    protected:
    int x;
    public:
    void get_x(){
        cout << "Enter value of x: ";
        cin >> x;
    }
};

class BA1: public virtual A{ //parent class1
    protected:
    int y;
    public:
    void get_y(){
        cout << "Enter value of y: ";
        cin >> y;
    };
};

class BA2: public virtual A{  //parent class2
    protected:
    int z;
    public:
    void get_z(){
        cout << "Enter value of z: ";
        cin >> z;
    };
};

class B: public BA1, public BA2{ //child class
    public:
    void sum(){
        int sum = x + y + z;
        cout << "Sum of x, y, and z: " << sum << endl;
    }
};

int main(){
    B b;
    b.get_x();
    b.get_y();
    b.get_z();
    b.sum();
    return 0;
}