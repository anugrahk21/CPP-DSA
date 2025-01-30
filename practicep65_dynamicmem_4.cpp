#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Employee{
    int id;
    float salary;
    public:
    void input(){
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<endl;
    };
    void display(){
        cout<<"\n"<<id<<" : "<<salary;
    };
};

int main(){
    int n;
    cout<<"Enter number of emp: ";
    cin>>n;
    Employee *p=new Employee[n];
    Employee *d=p;
    Employee *flag=p;

    if(p==NULL){
        cout<<"Memory allocation failure";
        exit(1);
    };

    for(int i=0;i<n;++i){
        p->input();
        p++;
    };
    cout<<"Employee : ID Salary";
    for(int i=0;i<n;++i){
        d->display();
        d++;
    }
    delete[] flag;
}