#include <iostream>
using namespace std;

struct student{
    string name; //char name[50];
    int age;
    float grade;

};

int main(){
    student s1;
    cout << "Enter Name: ";
    cin >> s1.name; //cin.get(s1.name,50)
    cout << "Enter Age: ";
    cin >> s1.age;
    cout <<"Enter Grade: ";
    cin >> s1.grade;
    cout << "Name: "<<s1.name <<endl;
    cout << "Age: "<<s1.age <<endl;
    cout <<"Grade: "<< s1.grade <<endl;

};