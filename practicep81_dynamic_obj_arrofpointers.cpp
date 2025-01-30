#include <iostream>
using namespace std;

//program to create an array of objects of class student and display the details of all the students

class Student{
    int id;
    string name;
    public:
    Student(){
        cout<<"Enter id: ";
        cin>>id; //giving value to the member of the class and not using this pointer because here there is no ambiguity as there is no local variable with the same name
        cout<<"Enter name: ";
        cin>>name;
        cout<<endl;
    };
    ~Student(){
        cout<<"Exiting\n";
    }
    void display(){
        cout<<"\n"<<id<<" : "<<name;
    }
};

int main(){
    int n;
    cout<<"Enter number of student: ";
    cin>>n;
    Student *p=new Student[n]; //array of objects of class student and constructor is called n times
    //pointer to the first object of the array is stored in p
    Student *d=p; //pointer to the first object of the array is stored in d
    Student *flag=p; //pointer to the first object of the array is stored in flag

    if(p==NULL){
        cout<<"Memory allocation failure";
        exit(1);
    };
    cout<<"STUDENT ID : NAME";
    for(int i=0;i<n;++i){
        d->display();
        d++; //incrementing the pointer to point to the next object of the array
        //or
        //p->display();
        //p++;
        //or
        //p[i].display();  //p[i] is equivalent to *(p+i) or *(d+i) or 
    };
    cout<<endl<<endl;
    delete[] flag; //deleting the array of objects
    //if base address is deleted, all the objects are deleted
    return 0;
};