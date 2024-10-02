#include <iostream>
using namespace std;

class Anugrah{
    int a,y;
    public:
    Anugrah(int age,int year):a(age),y(year){};
    void display(){
        cout<<"Age: "<<a<<endl;
        cout<<"Year: "<<y;
    }
};

int main(){
    Anugrah anu(19,2005);
    anu.display();

}