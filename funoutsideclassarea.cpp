#include <iostream>
using namespace std;
//declaration of function outside the class and accessing the private members using member function.
class area{
    private:
    double radius;

    public:
    void findarea();
};
void area::findarea(){
    cout<< "enter radius: ";
    cin >>radius;
    cout<<"area is : "<< 3.14 * radius * radius;
}
int main(){
    area a;
    a.findarea();
}