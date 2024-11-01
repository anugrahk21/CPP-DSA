#include <iostream>
#include <string>
using namespace std;

//inheritance, access modes and specifiers for classes

class Student{
    private:
    int roll_no;
    protected:
    char section[10];
    public:
    string name;
    void get_rollno(){
        cout << "Enter roll number: ";
        cin >> roll_no;
    };
    void show_rollno(){
        cout << "Roll number: " << roll_no << endl;
    }
};

class Result: public Student{
    private:
    float fees;
    public:
    void get_data(){
        get_rollno();
        cout << "Enter fees: ";
        cin >> fees;
        cout << "Enter Section: ";
        cin >> section;
    };
    void display(){
        show_rollno();
        cout<<"Name: "<<name<<endl;
        cout << "Fees: " << fees << endl;
        cout << "Section: " << section << endl;
    }
};

int main(){
    Result r;
    cout<<"Enter name: ";
    getline(cin,r.name);
    r.get_data();
    cout<<endl;
    cout<<"Student Details"<<endl;
    r.display();
    return 0;
}