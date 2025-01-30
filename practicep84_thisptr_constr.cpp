#include <iostream>
using namespace std;

//program to demonstrate the use of this pointer in cpp, use of constructor and member functions in a class

class Person{
    private:
    string name;
    int age;
    public:
    
    Person(){
        cout<<"Default constructor is called"<<endl;
        
    };
    int setnameage(string name,int age){
        this->name=name; //difference between this->name and name is that this->name is the name of the object and name is the name of the parameter
        //so to differentiate between the two we use this->name
        this->age=age;
        return 0;
    };
    int display(){
        cout<<"Name of current object: "<<name<<endl;
        cout<<"Age of current object: "<<age<<endl;
        return 0;
    };
};

int main(){
    Person p;
    int k;
    string r;
    cin>>r;
    cin>>k;
    p.setnameage(r,k);
    p.display();
}