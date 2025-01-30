#include <iostream>
using namespace std;

//n students from the user,dynamic objects, getinfo, showinfo,array of obj
class StudentInfo{
    public:
    int roll;
    string name;
    virtual void getInfo()=0;
    virtual void showInfo()=0;
};

class Student:public StudentInfo{
    public:
    void getInfo(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll: ";
        cin>>roll;
    };
    void showInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    };
};

int main(){
    int n;
    cout<<"Enter the number of students";
    cin>>n;
    Student *s[n];
    cout<<"Enter the details of the students: "<<endl;
    for(int i=0;i<n;i++){
        s[i]=new Student;
        s[i]->getInfo();
    };
    cout<<"The details of the students are: "<<endl;
    for(int i=0;i<n;i++){
        s[i]->showInfo();
    };
}